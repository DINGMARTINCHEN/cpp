// Copyright 2012 Google Inc. All rights reserved.

(function() {

    var data = {
        "resource": {
            "version": "1",

            "macros": [],
            "tags": [],
            "predicates": [],
            "rules": []
        },
        "runtime": []
        ,
        "blob": {
            "1": "1"
        }

    };

    var ba, ca = function(a) {
        var b = 0;
        return function() {
            return b < a.length ? {
                done: !1,
                value: a[b++]
            } : {
                done: !0
            }
        }
    }, fa = typeof Object.defineProperties == "function" ? Object.defineProperty : function(a, b, c) {
        if (a == Array.prototype || a == Object.prototype)
            return a;
        a[b] = c.value;
        return a
    }
    , ha = function(a) {
        for (var b = ["object" == typeof globalThis && globalThis, a, "object" == typeof window && window, "object" == typeof self && self, "object" == typeof global && global], c = 0; c < b.length; ++c) {
            var d = b[c];
            if (d && d.Math == Math)
                return d
        }
        throw Error("Cannot find global object");
    }, ia = ha(this), ja = function(a, b) {
        if (b)
            a: {
                for (var c = ia, d = a.split("."), e = 0; e < d.length - 1; e++) {
                    var f = d[e];
                    if (!(f in c))
                        break a;
                    c = c[f]
                }
                var k = d[d.length - 1]
                  , l = c[k]
                  , m = b(l);
                m != l && m != null && fa(c, k, {
                    configurable: !0,
                    writable: !0,
                    value: m
                })
            }
    };
    ja("Symbol", function(a) {
        if (a)
            return a;
        var b = function(f, k) {
            this.m = f;
            fa(this, "description", {
                configurable: !0,
                writable: !0,
                value: k
            })
        };
        b.prototype.toString = function() {
            return this.m
        }
        ;
        var c = "jscomp_symbol_" + (Math.random() * 1E9 >>> 0) + "_"
          , d = 0
          , e = function(f) {
            if (this instanceof e)
                throw new TypeError("Symbol is not a constructor");
            return new b(c + (f || "") + "_" + d++,f)
        };
        return e
    });
    ja("Symbol.iterator", function(a) {
        if (a)
            return a;
        for (var b = Symbol("Symbol.iterator"), c = "Array Int8Array Uint8Array Uint8ClampedArray Int16Array Uint16Array Int32Array Uint32Array Float32Array Float64Array".split(" "), d = 0; d < c.length; d++) {
            var e = ia[c[d]];
            typeof e === "function" && typeof e.prototype[b] != "function" && fa(e.prototype, b, {
                configurable: !0,
                writable: !0,
                value: function() {
                    return ka(ca(this))
                }
            })
        }
        return b
    });
    var ka = function(a) {
        var b = {
            next: a
        };
        b[Symbol.iterator] = function() {
            return this
        }
        ;
        return b
    }
      , la = function(a) {
        var b = typeof Symbol != "undefined" && Symbol.iterator && a[Symbol.iterator];
        if (b)
            return b.call(a);
        if (typeof a.length == "number")
            return {
                next: ca(a)
            };
        throw Error(String(a) + " is not an iterable or ArrayLike");
    }
      , ma = function(a) {
        for (var b, c = []; !(b = a.next()).done; )
            c.push(b.value);
        return c
    }
      , na = function(a) {
        return a instanceof Array ? a : ma(la(a))
    }
      , oa = typeof Object.assign == "function" ? Object.assign : function(a, b) {
        for (var c = 1; c < arguments.length; c++) {
            var d = arguments[c];
            if (d)
                for (var e in d)
                    Object.prototype.hasOwnProperty.call(d, e) && (a[e] = d[e])
        }
        return a
    }
    ;
    ja("Object.assign", function(a) {
        return a || oa
    });
    var pa = typeof Object.create == "function" ? Object.create : function(a) {
        var b = function() {};
        b.prototype = a;
        return new b
    }
    , ra;
    if (typeof Object.setPrototypeOf == "function")
        ra = Object.setPrototypeOf;
    else {
        var sa;
        a: {
            var ua = {
                a: !0
            }
              , va = {};
            try {
                va.__proto__ = ua;
                sa = va.a;
                break a
            } catch (a) {}
            sa = !1
        }
        ra = sa ? function(a, b) {
            a.__proto__ = b;
            if (a.__proto__ !== b)
                throw new TypeError(a + " is not extensible");
            return a
        }
        : null
    }
    var wa = ra
      , xa = function(a, b) {
        a.prototype = pa(b.prototype);
        a.prototype.constructor = a;
        if (wa)
            wa(a, b);
        else
            for (var c in b)
                if (c != "prototype")
                    if (Object.defineProperties) {
                        var d = Object.getOwnPropertyDescriptor(b, c);
                        d && Object.defineProperty(a, c, d)
                    } else
                        a[c] = b[c];
        a.bn = b.prototype
    }
      , ya = function() {
        this.J = !1;
        this.D = null;
        this.Xa = void 0;
        this.m = 1;
        this.sa = this.N = 0;
        this.F = null
    }
      , za = function(a) {
        if (a.J)
            throw new TypeError("Generator is already running");
        a.J = !0
    };
    ya.prototype.R = function(a) {
        this.Xa = a
    }
    ;
    var Aa = function(a, b) {
        a.F = {
            xi: b,
            kl: !0
        };
        a.m = a.N || a.sa
    };
    ya.prototype.return = function(a) {
        this.F = {
            return: a
        };
        this.m = this.sa
    }
    ;
    var Ca = function(a, b) {
        a.m = 4;
        return {
            value: b
        }
    }
      , Ea = function(a) {
        a.N = 0;
        var b = a.F.xi;
        a.F = null;
        return b
    }
      , Fa = function(a) {
        this.m = new ya;
        this.D = a
    }
      , Ia = function(a, b) {
        za(a.m);
        var c = a.m.D;
        if (c)
            return Ga(a, "return"in c ? c["return"] : function(d) {
                return {
                    value: d,
                    done: !0
                }
            }
            , b, a.m.return);
        a.m.return(b);
        return Ha(a)
    }
      , Ga = function(a, b, c, d) {
        try {
            var e = b.call(a.m.D, c);
            if (!(e instanceof Object))
                throw new TypeError("Iterator result " + e + " is not an object");
            if (!e.done)
                return a.m.J = !1,
                e;
            var f = e.value
        } catch (k) {
            return a.m.D = null,
            Aa(a.m, k),
            Ha(a)
        }
        a.m.D = null;
        d.call(a.m, f);
        return Ha(a)
    }
      , Ha = function(a) {
        for (; a.m.m; )
            try {
                var b = a.D(a.m);
                if (b)
                    return a.m.J = !1,
                    {
                        value: b.value,
                        done: !1
                    }
            } catch (d) {
                a.m.Xa = void 0,
                Aa(a.m, d)
            }
        a.m.J = !1;
        if (a.m.F) {
            var c = a.m.F;
            a.m.F = null;
            if (c.kl)
                throw c.xi;
            return {
                value: c.return,
                done: !0
            }
        }
        return {
            value: void 0,
            done: !0
        }
    }
      , Ka = function(a) {
        this.next = function(b) {
            var c;
            za(a.m);
            a.m.D ? c = Ga(a, a.m.D.next, b, a.m.R) : (a.m.R(b),
            c = Ha(a));
            return c
        }
        ;
        this.throw = function(b) {
            var c;
            za(a.m);
            a.m.D ? c = Ga(a, a.m.D["throw"], b, a.m.R) : (Aa(a.m, b),
            c = Ha(a));
            return c
        }
        ;
        this.return = function(b) {
            return Ia(a, b)
        }
        ;
        this[Symbol.iterator] = function() {
            return this
        }
    }
      , La = function(a) {
        function b(d) {
            return a.next(d)
        }
        function c(d) {
            return a.throw(d)
        }
        new Promise(function(d, e) {
            function f(k) {
                k.done ? d(k.value) : Promise.resolve(k.value).then(b, c).then(f, e)
            }
            f(a.next())
        }
        )
    }
      , Ma = function() {
        for (var a = Number(this), b = [], c = a; c < arguments.length; c++)
            b[c - a] = arguments[c];
        return b
    };
    /*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
    var Na = this || self
      , Oa = function(a) {
        return a
    };
    /*
 jQuery (c) 2005, 2012 jQuery Foundation, Inc. jquery.org/license.
*/
    var Pa = /\[object (Boolean|Number|String|Function|Array|Date|RegExp)\]/
      , Qa = function(a) {
        if (a == null)
            return String(a);
        var b = Pa.exec(Object.prototype.toString.call(Object(a)));
        return b ? b[1].toLowerCase() : "object"
    }
      , Ra = function(a, b) {
        return Object.prototype.hasOwnProperty.call(Object(a), b)
    }
      , Sa = function(a) {
        if (!a || Qa(a) != "object" || a.nodeType || a == a.window)
            return !1;
        try {
            if (a.constructor && !Ra(a, "constructor") && !Ra(a.constructor.prototype, "isPrototypeOf"))
                return !1
        } catch (c) {
            return !1
        }
        for (var b in a)
            ;
        return b === void 0 || Ra(a, b)
    }
      , g = function(a, b) {
        var c = b || (Qa(a) == "array" ? [] : {}), d;
        for (d in a)
            if (Ra(a, d)) {
                var e = a[d];
                Qa(e) == "array" ? (Qa(c[d]) != "array" && (c[d] = []),
                c[d] = g(e, c[d])) : Sa(e) ? (Sa(c[d]) || (c[d] = {}),
                c[d] = g(e, c[d])) : c[d] = e
            }
        return c
    };
    function Ta() {
        for (var a = Ua, b = {}, c = 0; c < a.length; ++c)
            b[a[c]] = c;
        return b
    }
    function Va() {
        var a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        a += a.toLowerCase() + "0123456789-_";
        return a + "."
    }
    var Ua, Wa;
    function Xa(a) {
        Ua = Ua || Va();
        Wa = Wa || Ta();
        for (var b = [], c = 0; c < a.length; c += 3) {
            var d = c + 1 < a.length
              , e = c + 2 < a.length
              , f = a.charCodeAt(c)
              , k = d ? a.charCodeAt(c + 1) : 0
              , l = e ? a.charCodeAt(c + 2) : 0
              , m = f >> 2
              , n = (f & 3) << 4 | k >> 4
              , p = (k & 15) << 2 | l >> 6
              , q = l & 63;
            e || (q = 64,
            d || (p = 64));
            b.push(Ua[m], Ua[n], Ua[p], Ua[q])
        }
        return b.join("")
    }
    function Ya(a) {
        function b(m) {
            for (; d < a.length; ) {
                var n = a.charAt(d++)
                  , p = Wa[n];
                if (p != null)
                    return p;
                if (!/^[\s\xa0]*$/.test(n))
                    throw Error("Unknown base64 encoding at char: " + n);
            }
            return m
        }
        Ua = Ua || Va();
        Wa = Wa || Ta();
        for (var c = "", d = 0; ; ) {
            var e = b(-1)
              , f = b(0)
              , k = b(64)
              , l = b(64);
            if (l === 64 && e === -1)
                return c;
            c += String.fromCharCode(e << 2 | f >> 4);
            k !== 64 && (c += String.fromCharCode(f << 4 & 240 | k >> 2),
            l !== 64 && (c += String.fromCharCode(k << 6 & 192 | l)))
        }
    }
    ;var Za = {};
    function $a(a, b) {
        Za[a] = Za[a] || [];
        Za[a][b] = !0
    }
    function ab(a) {
        var b = Za[a];
        if (!b || b.length === 0)
            return "";
        for (var c = [], d = 0, e = 0; e < b.length; e++)
            e % 8 === 0 && e > 0 && (c.push(String.fromCharCode(d)),
            d = 0),
            b[e] && (d |= 1 << e % 8);
        d > 0 && c.push(String.fromCharCode(d));
        return Xa(c.join("")).replace(/\.+$/, "")
    }
    function bb() {
        for (var a = [], b = Za.fdr || [], c = 0; c < b.length; c++)
            b[c] && a.push(c);
        return a.length > 0 ? a : void 0
    }
    ;var cb = []
      , db = {};
    function eb(a) {
        return cb[a] === void 0 ? !1 : cb[a]
    }
    ;function fb() {}
    function gb(a) {
        return typeof a === "function"
    }
    function h(a) {
        return typeof a === "string"
    }
    function hb(a) {
        return typeof a === "number" && !isNaN(a)
    }
    function ib(a) {
        return Array.isArray(a) ? a : [a]
    }
    function jb(a, b) {
        if (a && Array.isArray(a))
            for (var c = 0; c < a.length; c++)
                if (a[c] && b(a[c]))
                    return a[c]
    }
    function kb(a, b) {
        if (!hb(a) || !hb(b) || a > b)
            a = 0,
            b = 2147483647;
        return Math.floor(Math.random() * (b - a + 1) + a)
    }
    function lb(a, b) {
        for (var c = new mb, d = 0; d < a.length; d++)
            c.set(a[d], !0);
        for (var e = 0; e < b.length; e++)
            if (c.get(b[e]))
                return !0;
        return !1
    }
    function B(a, b) {
        for (var c in a)
            Object.prototype.hasOwnProperty.call(a, c) && b(c, a[c])
    }
    function nb(a) {
        return !!a && (Object.prototype.toString.call(a) === "[object Arguments]" || Object.prototype.hasOwnProperty.call(a, "callee"))
    }
    function ob(a) {
        return Math.round(Number(a)) || 0
    }
    function pb(a) {
        return "false" === String(a).toLowerCase() ? !1 : !!a
    }
    function qb(a) {
        var b = [];
        if (Array.isArray(a))
            for (var c = 0; c < a.length; c++)
                b.push(String(a[c]));
        return b
    }
    function rb(a) {
        return a ? a.replace(/^\s+|\s+$/g, "") : ""
    }
    function sb() {
        return new Date(Date.now())
    }
    function tb() {
        return sb().getTime()
    }
    var mb = function() {
        this.prefix = "gtm.";
        this.values = {}
    };
    mb.prototype.set = function(a, b) {
        this.values[this.prefix + a] = b
    }
    ;
    mb.prototype.get = function(a) {
        return this.values[this.prefix + a]
    }
    ;
    function ub(a, b, c) {
        return a && a.hasOwnProperty(b) ? a[b] : c
    }
    function vb(a) {
        var b = a;
        return function() {
            if (b) {
                var c = b;
                b = void 0;
                try {
                    c()
                } catch (d) {}
            }
        }
    }
    function wb(a, b) {
        for (var c in b)
            b.hasOwnProperty(c) && (a[c] = b[c])
    }
    function xb(a, b) {
        for (var c = [], d = 0; d < a.length; d++)
            c.push(a[d]),
            c.push.apply(c, b[a[d]] || []);
        return c
    }
    function yb(a, b) {
        return a.length >= b.length && a.substring(0, b.length) === b
    }
    function zb(a, b) {
        return a.length >= b.length && a.substring(a.length - b.length, a.length) === b
    }
    function Ab(a, b) {
        for (var c = {}, d = c, e = a.split("."), f = 0; f < e.length - 1; f++)
            d = d[e[f]] = {};
        d[e[e.length - 1]] = b;
        return c
    }
    var Bb = /^\w{1,9}$/;
    function Cb(a, b) {
        a = a || {};
        b = b || ",";
        var c = [];
        B(a, function(d, e) {
            Bb.test(d) && e && c.push(d)
        });
        return c.join(b)
    }
    function Db(a, b) {
        function c() {
            e && ++d === b && (e(),
            e = null,
            c.done = !0)
        }
        var d = 0
          , e = a;
        c.done = !1;
        return c
    }
    function Eb(a) {
        if (!a)
            return a;
        var b = a;
        if (eb(3))
            try {
                b = decodeURIComponent(a)
            } catch (d) {}
        var c = b.split(",");
        return c.length === 2 && c[0] === c[1] ? c[0] : a
    }
    ;var Fb, Gb = function() {
        if (Fb === void 0) {
            var a = null
              , b = Na.trustedTypes;
            if (b && b.createPolicy) {
                try {
                    a = b.createPolicy("goog#html", {
                        createHTML: Oa,
                        createScript: Oa,
                        createScriptURL: Oa
                    })
                } catch (c) {
                    Na.console && Na.console.error(c.message)
                }
                Fb = a
            } else
                Fb = a
        }
        return Fb
    };
    var Hb = function(a) {
        this.m = a
    };
    Hb.prototype.toString = function() {
        return this.m + ""
    }
    ;
    var Ib = {};
    /*

 SPDX-License-Identifier: Apache-2.0
*/
    var Jb = /^\s*(?!javascript:)(?:[\w+.-]+:|[^:/?#]*(?:[/?#]|$))/i;
    var Kb = Array.prototype.indexOf ? function(a, b) {
        return Array.prototype.indexOf.call(a, b, void 0)
    }
    : function(a, b) {
        if (typeof a === "string")
            return typeof b !== "string" || b.length != 1 ? -1 : a.indexOf(b, 0);
        for (var c = 0; c < a.length; c++)
            if (c in a && a[c] === b)
                return c;
        return -1
    }
    ;
    var Lb = {}
      , Mb = function(a) {
        this.m = a
    };
    Mb.prototype.toString = function() {
        return this.m.toString()
    }
    ;
    function Nb(a) {
        return a === null ? "null" : a === void 0 ? "undefined" : a
    }
    ;var E = window
      , H = document
      , Ob = navigator
      , Pb = function() {
        var a;
        try {
            a = Ob.serviceWorker
        } catch (b) {
            return
        }
        return a
    }
      , Qb = H.currentScript
      , Rb = Qb && Qb.src
      , Sb = function(a, b) {
        var c = E[a];
        E[a] = c === void 0 ? b : c;
        return E[a]
    };
    function Tb(a) {
        return (Ob.userAgent || "").indexOf(a) !== -1
    }
    var Ub = {
        async: 1,
        nonce: 1,
        onerror: 1,
        onload: 1,
        src: 1,
        type: 1
    }
      , Vb = {
        onload: 1,
        src: 1,
        width: 1,
        height: 1,
        style: 1
    };
    function Wb(a, b, c) {
        b && B(b, function(d, e) {
            d = d.toLowerCase();
            c.hasOwnProperty(d) || a.setAttribute(d, e)
        })
    }
    var Xb = function(a, b, c, d, e) {
        var f = H.createElement("script");
        Wb(f, d, Ub);
        f.type = "text/javascript";
        f.async = d && d.async === !1 ? !1 : !0;
        var k, l = Nb(a), m = Gb(), n = m ? m.createScriptURL(l) : l;
        k = new Hb(n,Ib);
        f.src = k instanceof Hb && k.constructor === Hb ? k.m : "type_error:TrustedResourceUrl";
        var p, q, r, t = (r = (q = (f.ownerDocument && f.ownerDocument.defaultView || window).document).querySelector) == null ? void 0 : r.call(q, "script[nonce]");
        (p = t ? t.nonce || t.getAttribute("nonce") || "" : "") && f.setAttribute("nonce", p);
        b && (f.onload = b);
        c && (f.onerror = c);
        if (e)
            e.appendChild(f);
        else {
            var u = H.getElementsByTagName("script")[0] || H.body || H.head;
            u.parentNode.insertBefore(f, u)
        }
        return f
    }
      , Yb = function() {
        if (Rb) {
            var a = Rb.toLowerCase();
            if (a.indexOf("https://") === 0)
                return 2;
            if (a.indexOf("http://") === 0)
                return 3
        }
        return 1
    }
      , Zb = function(a, b, c, d, e) {
        var f;
        f = f === void 0 ? !0 : f;
        var k = e
          , l = !1;
        k || (k = H.createElement("iframe"),
        l = !0);
        Wb(k, c, Vb);
        d && B(d, function(n, p) {
            k.dataset[n] = p
        });
        f && (k.height = "0",
        k.width = "0",
        k.style.display = "none",
        k.style.visibility = "hidden");
        a !== void 0 && (k.src = a);
        if (l) {
            var m = H.body && H.body.lastChild || H.body || H.head;
            m.parentNode.insertBefore(k, m)
        }
        b && (k.onload = b);
        return k
    }
      , $b = function(a, b, c, d) {
        var e = new Image(1,1);
        Wb(e, d, {});
        e.onload = function() {
            e.onload = null;
            b && b()
        }
        ;
        e.onerror = function() {
            e.onerror = null;
            c && c()
        }
        ;
        e.src = a;
        return e
    }
      , ac = function(a, b, c, d) {
        a.addEventListener ? a.addEventListener(b, c, !!d) : a.attachEvent && a.attachEvent("on" + b, c)
    }
      , bc = function(a, b, c) {
        a.removeEventListener ? a.removeEventListener(b, c, !1) : a.detachEvent && a.detachEvent("on" + b, c)
    }
      , J = function(a) {
        E.setTimeout(a, 0)
    }
      , cc = function(a, b) {
        return a && b && a.attributes && a.attributes[b] ? a.attributes[b].value : null
    }
      , dc = function(a) {
        function b(e) {
            e && e != " " && (e = e.replace(/^[\s\xa0]+|[\s\xa0]+$/g, ""));
            e && e != " " && (e = e.replace(/^[\s\xa0]+|[\s\xa0]+$/g, ""));
            e && (e = e.replace(/(\xa0+|\s{2,}|\n|\r\t)/g, " "));
            return e
        }
        var c = b(a.innerText || a.textContent || "");
        if (eb(10)) {
            var d = b(a.textContent || "");
            $a("TAGGING", 26);
            d !== c && $a("TAGGING", 25)
        }
        return c
    }
      , ec = function(a) {
        var b = H.createElement("div"), c = b, d, e = Nb("A<div>" + a + "</div>"), f = Gb(), k = f ? f.createHTML(e) : e;
        d = new Mb(k,Lb);
        if (c.nodeType === 1) {
            var l = c.tagName;
            if (l === "SCRIPT" || l === "STYLE")
                throw Error("");
        }
        c.innerHTML = d instanceof Mb && d.constructor === Mb ? d.m : "type_error:SafeHtml";
        b = b.lastChild;
        for (var m = []; b.firstChild; )
            m.push(b.removeChild(b.firstChild));
        return m
    }
      , fc = function(a) {
        var b;
        try {
            b = Ob.sendBeacon && Ob.sendBeacon(a)
        } catch (c) {
            $a("TAGGING", 15)
        }
        b || $b(a)
    }
      , gc = function(a, b) {
        try {
            return Ob.sendBeacon(a, b)
        } catch (c) {
            $a("TAGGING", 15)
        }
        return !1
    }
      , hc = {
        cache: "no-store",
        credentials: "include",
        keepalive: !0,
        method: "POST",
        mode: "no-cors",
        redirect: "follow"
    }
      , jc = function(a, b, c) {
        if (ic()) {
            var d = Object.assign({}, hc);
            b && (d.body = b);
            c && (c.attributionReporting && (d.attributionReporting = c.attributionReporting),
            c.browsingTopics && (d.browsingTopics = c.browsingTopics));
            try {
                var e = E.fetch(a, d);
                e && e.catch(fb);
                return !0
            } catch (f) {}
        }
        if (c && c.noFallback)
            return !1;
        if (b)
            return gc(a, b);
        fc(a);
        return !0
    }
      , ic = function() {
        return typeof E.fetch === "function"
    }
      , kc = function(a, b) {
        var c = a[b];
        c && typeof c.animVal === "string" && (c = c.animVal);
        return c
    }
      , lc = function() {
        var a = E.performance;
        if (a && gb(a.now))
            return a.now()
    }
      , mc = function() {
        return E.performance || void 0
    };
    var nc = function(a) {
        this.message = a
    };
    function oc(a) {
        var b = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[a];
        return b === void 0 ? new nc("Value " + a + " can not be encoded in web-safe base64 dictionary.") : b
    }
    ;function pc(a) {
        switch (a) {
        case 1:
            return "1";
        case 2:
        case 4:
            return "0";
        default:
            return "-"
        }
    }
    ;var rc = /^[1-9a-zA-Z_-][1-9a-c][1-9a-v]\d$/;
    function sc(a, b) {
        for (var c = "", d = !0; a > 7; ) {
            var e = a & 31;
            a >>= 5;
            d ? d = !1 : e |= 32;
            c = "" + oc(e) + c
        }
        a <<= 2;
        d || (a |= 32);
        return c = "" + oc(a | b) + c
    }
    ;var tc = function() {
        function a(b) {
            return {
                toString: function() {
                    return b
                }
            }
        }
        return {
            Zi: a("consent"),
            Cg: a("convert_case_to"),
            Dg: a("convert_false_to"),
            Eg: a("convert_null_to"),
            Fg: a("convert_true_to"),
            Gg: a("convert_undefined_to"),
            lm: a("debug_mode_metadata"),
            ma: a("function"),
            Ef: a("instance_name"),
            Vj: a("live_only"),
            Wj: a("malware_disabled"),
            Xj: a("metadata"),
            bk: a("original_activity_id"),
            Am: a("original_vendor_template_id"),
            zm: a("once_on_load"),
            Zj: a("once_per_event"),
            Xh: a("once_per_load"),
            Cm: a("priority_override"),
            Dm: a("respected_consent_types"),
            hi: a("setup_tags"),
            vd: a("tag_id"),
            oi: a("teardown_tags")
        }
    }();
    var Qc;
    var Rc = [], Sc = [], Tc = [], Uc = [], Vc = [], Wc = {}, Xc, Yc;
    function Zc(a) {
        Yc = Yc || a
    }
    function $c(a) {}
    var ad, bd = [], cd = [];
    function dd(a, b, c) {
        try {
            return Xc(ed(a, b, c))
        } catch (d) {
            JSON.stringify(a)
        }
        return 2
    }
    function fd(a) {
        var b = a[tc.ma];
        if (!b)
            throw Error("Error: No function name given for function call.");
        return !!Wc[b]
    }
    var ed = function(a, b, c) {
        c = c || [];
        var d = {}, e;
        for (e in a)
            a.hasOwnProperty(e) && (d[e] = gd(a[e], b, c));
        return d
    }
      , gd = function(a, b, c) {
        if (Array.isArray(a)) {
            var d;
            switch (a[0]) {
            case "function_id":
                return a[1];
            case "list":
                d = [];
                for (var e = 1; e < a.length; e++)
                    d.push(gd(a[e], b, c));
                return d;
            case "macro":
                var f = a[1];
                if (c[f])
                    return;
                var k = Rc[f];
                if (!k || b.isBlocked(k))
                    return;
                c[f] = !0;
                var l = String(k[tc.Ef]);
                try {
                    var m = ed(k, b, c);
                    m.vtp_gtmEventId = b.id;
                    b.priorityId && (m.vtp_gtmPriorityId = b.priorityId);
                    d = hd(m, {
                        event: b,
                        index: f,
                        type: 2,
                        name: l
                    });
                    ad && (d = ad.wk(d, m))
                } catch (y) {
                    b.logMacroError && b.logMacroError(y, Number(f), l),
                    d = !1
                }
                c[f] = !1;
                return d;
            case "map":
                d = {};
                for (var n = 1; n < a.length; n += 2)
                    d[gd(a[n], b, c)] = gd(a[n + 1], b, c);
                return d;
            case "template":
                d = [];
                for (var p = !1, q = 1; q < a.length; q++) {
                    var r = gd(a[q], b, c);
                    Yc && (p = p || Yc.nl(r));
                    d.push(r)
                }
                return Yc && p ? Yc.zk(d) : d.join("");
            case "escape":
                d = gd(a[1], b, c);
                if (Yc && Array.isArray(a[1]) && a[1][0] === "macro" && Yc.ol(a))
                    return Yc.Gl(d);
                d = String(d);
                for (var t = 2; t < a.length; t++)
                    uc[a[t]] && (d = uc[a[t]](d));
                return d;
            case "tag":
                var u = a[1];
                if (!Uc[u])
                    throw Error("Unable to resolve tag reference " + u + ".");
                return {
                    yi: a[2],
                    index: u
                };
            case "zb":
                var v = {
                    arg0: a[2],
                    arg1: a[3],
                    ignore_case: a[5]
                };
                v[tc.ma] = a[1];
                var w = dd(v, b, c)
                  , x = !!a[4];
                return x || w !== 2 ? x !== (w === 1) : null;
            default:
                throw Error("Attempting to expand unknown Value type: " + a[0] + ".");
            }
        }
        return a
    }
      , hd = function(a, b) {
        var c = a[tc.ma]
          , d = b && b.event;
        if (!c)
            throw Error("Error: No function name given for function call.");
        var e = Wc[c], f = b && b.type === 2 && (d == null ? void 0 : d.reportMacroDiscrepancy) && e && bd.indexOf(c) !== -1, k = {}, l;
        for (l in a)
            a.hasOwnProperty(l) && yb(l, "vtp_") && e && (k[l] = a[l]);
        e && d && d.cachedModelValues && (k.vtp_gtmCachedValues = d.cachedModelValues);
        if (b) {
            if (b.name == null) {
                var m;
                a: {
                    var n = b.type
                      , p = b.index;
                    if (p == null)
                        m = "";
                    else {
                        var q;
                        switch (n) {
                        case 2:
                            q = Rc[p];
                            break;
                        case 1:
                            q = Uc[p];
                            break;
                        default:
                            m = "";
                            break a
                        }
                        var r = q && q[tc.Ef];
                        m = r ? String(r) : ""
                    }
                }
                b.name = m
            }
            e && (k.vtp_gtmEntityIndex = b.index,
            k.vtp_gtmEntityName = b.name)
        }
        var t, u, v;
        if (f && cd.indexOf(c) === -1) {
            cd.push(c);
            var w = tb();
            t = e(k);
            var x = tb() - w
              , y = tb();
            u = Qc(c, b);
            v = x - (tb() - y)
        } else if (e && (t = e(k)),
        !e || f)
            u = Qc(c, b);
        if (f && d) {
            d.reportMacroDiscrepancy(d.id, c, void 0, !0);
            var z;
            a: {
                var A = t;
                if (A == void 0 || Array.isArray(A) || Sa(A))
                    z = !0;
                else {
                    switch (typeof A) {
                    case "boolean":
                    case "number":
                    case "string":
                    case "function":
                        z = !0;
                        break a
                    }
                    z = !1
                }
            }
            z ? (Array.isArray(t) ? Array.isArray(u) : Sa(t) ? Sa(u) : typeof t === "function" ? typeof u === "function" : t === u) || d.reportMacroDiscrepancy(d.id, c) : t !== u && d.reportMacroDiscrepancy(d.id, c);
            v !== void 0 && d.reportMacroDiscrepancy(d.id, c, v)
        }
        return e ? t : u
    };
    function id(a) {
        function b(r) {
            for (var t = 0; t < r.length; t++)
                d[r[t]] = !0
        }
        for (var c = [], d = [], e = jd(a), f = 0; f < Sc.length; f++) {
            var k = Sc[f]
              , l = kd(k, e);
            if (l) {
                for (var m = k.add || [], n = 0; n < m.length; n++)
                    c[m[n]] = !0;
                b(k.block || [])
            } else
                l === null && b(k.block || []);
        }
        for (var p = [], q = 0; q < Uc.length; q++)
            c[q] && !d[q] && (p[q] = !0);
        return p
    }
    function kd(a, b) {
        for (var c = a["if"] || [], d = 0; d < c.length; d++) {
            var e = b(c[d]);
            if (e === 0)
                return !1;
            if (e === 2)
                return null
        }
        for (var f = a.unless || [], k = 0; k < f.length; k++) {
            var l = b(f[k]);
            if (l === 2)
                return null;
            if (l === 1)
                return !1
        }
        return !0
    }
    function jd(a) {
        var b = [];
        return function(c) {
            b[c] === void 0 && (b[c] = dd(Tc[c], a));
            return b[c]
        }
    }
    ;var ld = {
        wk: function(a, b) {
            b[tc.Cg] && typeof a === "string" && (a = b[tc.Cg] === 1 ? a.toLowerCase() : a.toUpperCase());
            b.hasOwnProperty(tc.Eg) && a === null && (a = b[tc.Eg]);
            b.hasOwnProperty(tc.Gg) && a === void 0 && (a = b[tc.Gg]);
            b.hasOwnProperty(tc.Fg) && a === !0 && (a = b[tc.Fg]);
            b.hasOwnProperty(tc.Dg) && a === !1 && (a = b[tc.Dg]);
            return a
        }
    };
    var rd = {}
      , sd = (rd.uaa = !0,
    rd.uab = !0,
    rd.uafvl = !0,
    rd.uamb = !0,
    rd.uam = !0,
    rd.uap = !0,
    rd.uapv = !0,
    rd.uaw = !0,
    rd);
    var Bd = ["matches", "webkitMatchesSelector", "mozMatchesSelector", "msMatchesSelector", "oMatchesSelector"]
      , Cd = new mb;
    function Jd(a) {
        return Kd ? H.querySelectorAll(a) : null
    }
    function Ld(a, b) {
        if (!Kd)
            return null;
        if (Element.prototype.closest)
            try {
                return a.closest(b)
            } catch (e) {
                return null
            }
        var c = Element.prototype.matches || Element.prototype.webkitMatchesSelector || Element.prototype.mozMatchesSelector || Element.prototype.msMatchesSelector || Element.prototype.oMatchesSelector
          , d = a;
        if (!H.documentElement.contains(d))
            return null;
        do {
            try {
                if (c.call(d, b))
                    return d
            } catch (e) {
                break
            }
            d = d.parentElement || d.parentNode
        } while (d !== null && d.nodeType === 1);
        return null
    }
    var Md = !1;
    if (H.querySelectorAll)
        try {
            var Nd = H.querySelectorAll(":root");
            Nd && Nd.length == 1 && Nd[0] == H.documentElement && (Md = !0)
        } catch (a) {}
    var Kd = Md;
    var Od = /^[0-9A-Fa-f]{64}$/;
    function Pd(a) {
        try {
            return (new TextEncoder).encode(a)
        } catch (e) {
            for (var b = [], c = 0; c < a.length; c++) {
                var d = a.charCodeAt(c);
                d < 128 ? b.push(d) : d < 2048 ? b.push(192 | d >> 6, 128 | d & 63) : d < 55296 || d >= 57344 ? b.push(224 | d >> 12, 128 | d >> 6 & 63, 128 | d & 63) : (d = 65536 + ((d & 1023) << 10 | a.charCodeAt(++c) & 1023),
                b.push(240 | d >> 18, 128 | d >> 12 & 63, 128 | d >> 6 & 63, 128 | d & 63))
            }
            return new Uint8Array(b)
        }
    }
    function Qd(a) {
        if (a === "" || a === "e0")
            return Promise.resolve(a);
        var b;
        if ((b = E.crypto) == null ? 0 : b.subtle) {
            if (Od.test(a))
                return Promise.resolve(a);
            try {
                var c = Pd(a);
                return E.crypto.subtle.digest("SHA-256", c).then(function(d) {
                    var e = Array.from(new Uint8Array(d)).map(function(f) {
                        return String.fromCharCode(f)
                    }).join("");
                    return E.btoa(e).replace(/\+/g, "-").replace(/\//g, "_").replace(/=+$/, "")
                }).catch(function() {
                    return "e2"
                })
            } catch (d) {
                return Promise.resolve("e2")
            }
        } else
            return Promise.resolve("e1")
    }
    ;function L(a) {
        $a("GTM", a)
    }
    ;var M = {
        g: {
            na: "ad_personalization",
            O: "ad_storage",
            M: "ad_user_data",
            P: "analytics_storage",
            Td: "region",
            Jb: "consent_updated",
            xg: "wait_for_update",
            cj: "app_remove",
            dj: "app_store_refund",
            ej: "app_store_subscription_cancel",
            fj: "app_store_subscription_convert",
            gj: "app_store_subscription_renew",
            ij: "consent_update",
            Jg: "add_payment_info",
            Kg: "add_shipping_info",
            hc: "add_to_cart",
            ic: "remove_from_cart",
            Lg: "view_cart",
            Kb: "begin_checkout",
            jc: "select_item",
            cb: "view_item_list",
            vb: "select_promotion",
            eb: "view_promotion",
            Ga: "purchase",
            kc: "refund",
            Ja: "view_item",
            Mg: "add_to_wishlist",
            jj: "exception",
            kj: "first_open",
            lj: "first_visit",
            X: "gtag.config",
            Oa: "gtag.get",
            mj: "in_app_purchase",
            Lb: "page_view",
            nj: "screen_view",
            oj: "session_start",
            pj: "timing_complete",
            qj: "track_social",
            Mc: "user_engagement",
            rj: "user_id_update",
            fb: "gclgb",
            Pa: "gclid",
            Ng: "gclgs",
            Og: "gclst",
            ba: "ads_data_redaction",
            Pg: "gad_source",
            Qg: "gad_source_src",
            Nc: "gclid_url",
            Rg: "gclsrc",
            df: "gbraid",
            Ud: "wbraid",
            ia: "allow_ad_personalization_signals",
            ef: "allow_custom_scripts",
            Oc: "allow_direct_google_requests",
            ff: "allow_display_features",
            Vd: "allow_enhanced_conversions",
            hb: "allow_google_signals",
            Ba: "allow_interest_groups",
            sj: "app_id",
            tj: "app_installer_id",
            uj: "app_name",
            vj: "app_version",
            wb: "auid",
            wj: "auto_detection_enabled",
            Mb: "aw_remarketing",
            hf: "aw_remarketing_only",
            Wd: "discount",
            Xd: "aw_feed_country",
            Yd: "aw_feed_language",
            Z: "items",
            Zd: "aw_merchant_id",
            Sg: "aw_basket_type",
            Pc: "campaign_content",
            Qc: "campaign_id",
            Rc: "campaign_medium",
            Sc: "campaign_name",
            Tc: "campaign",
            Uc: "campaign_source",
            Vc: "campaign_term",
            ib: "client_id",
            Tg: "rnd",
            jf: "consent_update_type",
            xj: "content_group",
            yj: "content_type",
            Ta: "conversion_cookie_prefix",
            Wc: "conversion_id",
            oa: "conversion_linker",
            Ug: "conversion_linker_disabled",
            Nb: "conversion_api",
            ae: "cookie_deprecation",
            Qa: "cookie_domain",
            Ka: "cookie_expires",
            Ua: "cookie_flags",
            mc: "cookie_name",
            xb: "cookie_path",
            La: "cookie_prefix",
            nc: "cookie_update",
            oc: "country",
            ya: "currency",
            be: "customer_lifetime_value",
            Xc: "custom_map",
            kf: "gcldc",
            Yc: "dclid",
            zj: "debug_mode",
            ja: "developer_id",
            Aj: "disable_merchant_reported_purchases",
            Zc: "dc_custom_params",
            Bj: "dc_natural_search",
            Vg: "dynamic_event_settings",
            Wg: "affiliation",
            de: "checkout_option",
            lf: "checkout_step",
            Xg: "coupon",
            bd: "item_list_name",
            nf: "list_name",
            Cj: "promotions",
            dd: "shipping",
            pf: "tax",
            ee: "engagement_time_msec",
            fe: "enhanced_client_id",
            he: "enhanced_conversions",
            Yg: "enhanced_conversions_automatic_settings",
            ie: "estimated_delivery_date",
            qf: "euid_logged_in_state",
            ed: "event_callback",
            Dj: "event_category",
            kb: "event_developer_id_string",
            Ej: "event_label",
            qc: "event",
            je: "event_settings",
            ke: "event_timeout",
            Fj: "description",
            Gj: "fatal",
            Hj: "experiments",
            rf: "firebase_id",
            rc: "first_party_collection",
            me: "_x_20",
            lb: "_x_19",
            Zg: "fledge_drop_reason",
            ah: "fledge",
            bh: "flight_error_code",
            eh: "flight_error_message",
            fh: "fl_activity_category",
            gh: "fl_activity_group",
            tf: "fl_advertiser_id",
            hh: "fl_ar_dedupe",
            uf: "match_id",
            ih: "fl_random_number",
            jh: "tran",
            kh: "u",
            ne: "gac_gclid",
            sc: "gac_wbraid",
            lh: "gac_wbraid_multiple_conversions",
            mh: "ga_restrict_domain",
            nh: "ga_temp_client_id",
            uc: "gdpr_applies",
            oh: "geo_granularity",
            yb: "value_callback",
            nb: "value_key",
            vc: "_google_ng",
            Ob: "google_signals",
            qh: "google_tld",
            oe: "groups",
            rh: "gsa_experiment_id",
            sh: "gtm_up",
            zb: "iframe_state",
            fd: "ignore_referrer",
            vf: "internal_traffic_results",
            Ab: "is_legacy_converted",
            Bb: "is_legacy_loaded",
            pe: "is_passthrough",
            wc: "_lps",
            Ma: "language",
            qe: "legacy_developer_id_string",
            qa: "linker",
            xc: "accept_incoming",
            pb: "decorate_forms",
            T: "domains",
            Cb: "url_position",
            th: "method",
            Ij: "name",
            gd: "new_customer",
            uh: "non_interaction",
            Jj: "optimize_id",
            Kj: "page_hostname",
            hd: "page_path",
            Ca: "page_referrer",
            Va: "page_title",
            vh: "passengers",
            wh: "phone_conversion_callback",
            Lj: "phone_conversion_country_code",
            xh: "phone_conversion_css_class",
            Mj: "phone_conversion_ids",
            yh: "phone_conversion_number",
            zh: "phone_conversion_options",
            wf: "_protected_audience_enabled",
            jd: "quantity",
            se: "redact_device_info",
            xf: "referral_exclusion_definition",
            Pb: "restricted_data_processing",
            Nj: "retoken",
            Oj: "sample_rate",
            yf: "screen_name",
            Db: "screen_resolution",
            Pj: "search_term",
            Ha: "send_page_view",
            Qb: "send_to",
            yc: "server_container_url",
            kd: "session_duration",
            te: "session_engaged",
            zf: "session_engaged_time",
            qb: "session_id",
            ue: "session_number",
            ve: "_shared_user_id",
            ld: "delivery_postal_code",
            om: "temporary_client_id",
            Af: "topmost_url",
            Qj: "tracking_id",
            Bf: "traffic_type",
            za: "transaction_id",
            Eb: "transport_url",
            Ah: "trip_type",
            Rb: "update",
            Ra: "url_passthrough",
            we: "_user_agent_architecture",
            xe: "_user_agent_bitness",
            ye: "_user_agent_full_version_list",
            ze: "_user_agent_mobile",
            Ae: "_user_agent_model",
            Be: "_user_agent_platform",
            Ce: "_user_agent_platform_version",
            De: "_user_agent_wow64",
            Da: "user_data",
            Bh: "user_data_auto_latency",
            Ch: "user_data_auto_meta",
            Dh: "user_data_auto_multi",
            Eh: "user_data_auto_selectors",
            Fh: "user_data_auto_status",
            md: "user_data_mode",
            Ee: "user_data_settings",
            Aa: "user_id",
            Wa: "user_properties",
            Gh: "_user_region",
            Fe: "us_privacy_string",
            ka: "value",
            Hh: "wbraid_multiple_conversions",
            od: "_fpm_parameters",
            Ph: "_host_name",
            Qh: "_in_page_command",
            Rh: "_is_passthrough_cid",
            rb: "non_personalized_ads",
            ud: "_sst_parameters",
            jb: "conversion_label",
            ra: "page_location",
            ob: "global_developer_id_string",
            zc: "tc_privacy_string"
        }
    }
      , ne = {}
      , oe = Object.freeze((ne[M.g.ia] = 1,
    ne[M.g.ff] = 1,
    ne[M.g.Vd] = 1,
    ne[M.g.hb] = 1,
    ne[M.g.Z] = 1,
    ne[M.g.Qa] = 1,
    ne[M.g.Ka] = 1,
    ne[M.g.Ua] = 1,
    ne[M.g.mc] = 1,
    ne[M.g.xb] = 1,
    ne[M.g.La] = 1,
    ne[M.g.nc] = 1,
    ne[M.g.Xc] = 1,
    ne[M.g.ja] = 1,
    ne[M.g.Vg] = 1,
    ne[M.g.ed] = 1,
    ne[M.g.je] = 1,
    ne[M.g.ke] = 1,
    ne[M.g.rc] = 1,
    ne[M.g.mh] = 1,
    ne[M.g.Ob] = 1,
    ne[M.g.qh] = 1,
    ne[M.g.oe] = 1,
    ne[M.g.vf] = 1,
    ne[M.g.Ab] = 1,
    ne[M.g.Bb] = 1,
    ne[M.g.qa] = 1,
    ne[M.g.xf] = 1,
    ne[M.g.Pb] = 1,
    ne[M.g.Ha] = 1,
    ne[M.g.Qb] = 1,
    ne[M.g.yc] = 1,
    ne[M.g.kd] = 1,
    ne[M.g.zf] = 1,
    ne[M.g.ld] = 1,
    ne[M.g.Eb] = 1,
    ne[M.g.Rb] = 1,
    ne[M.g.Ee] = 1,
    ne[M.g.Wa] = 1,
    ne[M.g.ud] = 1,
    ne));
    Object.freeze([M.g.ra, M.g.Ca, M.g.Va, M.g.Ma, M.g.yf, M.g.Aa, M.g.rf, M.g.xj]);
    var pe = {}
      , qe = Object.freeze((pe[M.g.cj] = 1,
    pe[M.g.dj] = 1,
    pe[M.g.ej] = 1,
    pe[M.g.fj] = 1,
    pe[M.g.gj] = 1,
    pe[M.g.kj] = 1,
    pe[M.g.lj] = 1,
    pe[M.g.mj] = 1,
    pe[M.g.oj] = 1,
    pe[M.g.Mc] = 1,
    pe))
      , re = {}
      , se = Object.freeze((re[M.g.Jg] = 1,
    re[M.g.Kg] = 1,
    re[M.g.hc] = 1,
    re[M.g.ic] = 1,
    re[M.g.Lg] = 1,
    re[M.g.Kb] = 1,
    re[M.g.jc] = 1,
    re[M.g.cb] = 1,
    re[M.g.vb] = 1,
    re[M.g.eb] = 1,
    re[M.g.Ga] = 1,
    re[M.g.kc] = 1,
    re[M.g.Ja] = 1,
    re[M.g.Mg] = 1,
    re))
      , te = Object.freeze([M.g.ia, M.g.Oc, M.g.hb, M.g.nc, M.g.rc, M.g.fd, M.g.Ha, M.g.Rb])
      , ue = Object.freeze([].concat(na(te)))
      , ve = Object.freeze([M.g.Ka, M.g.ke, M.g.kd, M.g.zf, M.g.ee])
      , we = Object.freeze([].concat(na(ve)))
      , xe = {}
      , ye = (xe[M.g.O] = "1",
    xe[M.g.P] = "2",
    xe[M.g.M] = "3",
    xe[M.g.na] = "4",
    xe)
      , ze = {}
      , Ae = Object.freeze((ze[M.g.ia] = 1,
    ze[M.g.Oc] = 1,
    ze[M.g.Vd] = 1,
    ze[M.g.Ba] = 1,
    ze[M.g.Mb] = 1,
    ze[M.g.hf] = 1,
    ze[M.g.Wd] = 1,
    ze[M.g.Xd] = 1,
    ze[M.g.Yd] = 1,
    ze[M.g.Z] = 1,
    ze[M.g.Zd] = 1,
    ze[M.g.Ta] = 1,
    ze[M.g.oa] = 1,
    ze[M.g.Qa] = 1,
    ze[M.g.Ka] = 1,
    ze[M.g.Ua] = 1,
    ze[M.g.La] = 1,
    ze[M.g.ya] = 1,
    ze[M.g.be] = 1,
    ze[M.g.ja] = 1,
    ze[M.g.Aj] = 1,
    ze[M.g.he] = 1,
    ze[M.g.ie] = 1,
    ze[M.g.rf] = 1,
    ze[M.g.rc] = 1,
    ze[M.g.Ab] = 1,
    ze[M.g.Bb] = 1,
    ze[M.g.Ma] = 1,
    ze[M.g.gd] = 1,
    ze[M.g.ra] = 1,
    ze[M.g.Ca] = 1,
    ze[M.g.wh] = 1,
    ze[M.g.xh] = 1,
    ze[M.g.yh] = 1,
    ze[M.g.zh] = 1,
    ze[M.g.Pb] = 1,
    ze[M.g.Ha] = 1,
    ze[M.g.Qb] = 1,
    ze[M.g.yc] = 1,
    ze[M.g.ld] = 1,
    ze[M.g.za] = 1,
    ze[M.g.Eb] = 1,
    ze[M.g.Rb] = 1,
    ze[M.g.Ra] = 1,
    ze[M.g.Da] = 1,
    ze[M.g.Aa] = 1,
    ze[M.g.ka] = 1,
    ze))
      , Be = {}
      , Ce = Object.freeze((Be.search = "s",
    Be.youtube = "y",
    Be.playstore = "p",
    Be.shopping = "h",
    Be.ads = "a",
    Be.maps = "m",
    Be));
    Object.freeze(M.g);
    function De(a, b) {
        if (a === "")
            return b;
        var c = Number(a);
        return isNaN(c) ? b : c
    }
    ;var Ee = [];
    function Fe(a) {
        switch (a) {
        case 0:
            return 0;
        case 42:
            return 1;
        case 43:
            return 2;
        case 44:
            return 11;
        case 50:
            return 3;
        case 58:
            return 4;
        case 66:
            return 7;
        case 75:
            return 5;
        case 86:
            return 6;
        case 87:
            return 10;
        case 89:
            return 8;
        case 90:
            return 9
        }
    }
    function N(a) {
        Ee[a] = !0;
        var b = Fe(a);
        b !== void 0 && (cb[b] = !0)
    }
    N(30);
    N(26);
    N(27);
    N(28);
    N(29);
    N(45);
    N(70);
    N(54);
    N(67);
    N(33);
    N(15);
    N(95);
    N(14);
    N(100);
    N(94);
    N(59);
    N(76);
    N(6);
    N(46);
    N(4);
    N(73);
    N(91);
    N(65);
    N(63);
    N(64);
    N(74);
    N(104);
    N(101);
    N(75);
    N(5);
    N(66);
    N(86);
    db[1] = De('1', 6E4);
    db[3] = De('10', 1);
    db[2] = De('', 50);
    N(23);
    N(11);
    N(62);
    N(92);

    N(51);
    N(22);
    N(41);
    N(77);
    N(89);
    N(87);
    N(79);
    N(48);
    N(60);
    function P(a) {
        return !!Ee[a]
    }
    var Ge = {}
      , He = E.google_tag_manager = E.google_tag_manager || {};
    Ge.Ff = "48e0";
    Ge.sd = Number("0") || 0;
    Ge.ub = "dataLayer";
    Ge.km = "ChEI8JSBtgYQsPvmwrDjkPeOARIiAMcEfag0ku1SCZerzZ01ymoWYJiMjqMebCW3qehvC2BTLhoC/Zw\x3d";
    var Ie = {
        __cl: 1,
        __ecl: 1,
        __ehl: 1,
        __evl: 1,
        __fal: 1,
        __fil: 1,
        __fsl: 1,
        __hl: 1,
        __jel: 1,
        __lcl: 1,
        __sdl: 1,
        __tl: 1,
        __ytl: 1
    }, Je = {
        __paused: 1,
        __tg: 1
    }, Ke;
    for (Ke in Ie)
        Ie.hasOwnProperty(Ke) && (Je[Ke] = 1);
    var Le = pb(""), Me, Ne = !1;
    Ne = !0;
    Me = Ne;
    var Oe, Pe = !1;
    Oe = Pe;
    var Re, Se = !1;
    Re = Se;
    Ge.Kc = "www.googletagmanager.com";
    var Te = "" + Ge.Kc + (Me ? "/gtag/js" : "/gtm.js")
      , Ue = null
      , Ve = null
      , We = {}
      , Xe = {};
    function Ye() {
        var a = He.sequence || 1;
        He.sequence = a + 1;
        return a
    }
    Ge.aj = "";
    var Ze = "";
    Ge.Gf = Ze;
    var $e = new function() {
        this.m = "";
        this.F = !1;
        this.D = 0;
        this.sa = this.N = this.R = this.J = ""
    }
    ;
    function af() {
        var a = $e.J.length;
        return $e.J[a - 1] === "/" ? $e.J.substring(0, a - 1) : $e.J
    }
    function bf() {
        return $e.F && $e.D !== 1
    }
    function cf(a) {
        for (var b = {}, c = la(a.split("|")), d = c.next(); !d.done; d = c.next())
            b[d.value] = !0;
        return b
    }
    var df = new mb
      , ef = {}
      , ff = {}
      , jf = {
        name: Ge.ub,
        set: function(a, b) {
            g(Ab(a, b), ef);
            gf()
        },
        get: function(a) {
            return hf(a, 2)
        },
        reset: function() {
            df = new mb;
            ef = {};
            gf()
        }
    };
    function hf(a, b) {
        return b != 2 ? df.get(a) : kf(a)
    }
    function kf(a) {
        var b, c = a.split(".");
        b = b || [];
        for (var d = ef, e = 0; e < c.length; e++) {
            if (d === null)
                return !1;
            if (d === void 0)
                break;
            d = d[c[e]];
            if (b.indexOf(d) !== -1)
                return
        }
        return d
    }
    function lf(a, b) {
        ff.hasOwnProperty(a) || (df.set(a, b),
        g(Ab(a, b), ef),
        gf())
    }
    function gf(a) {
        B(ff, function(b, c) {
            df.set(b, c);
            g(Ab(b), ef);
            g(Ab(b, c), ef);
            a && delete ff[b]
        })
    }
    function mf(a, b) {
        var c, d = (b === void 0 ? 2 : b) !== 1 ? kf(a) : df.get(a);
        Qa(d) === "array" || Qa(d) === "object" ? c = g(d) : c = d;
        return c
    }
    ;var qf = /:[0-9]+$/
      , rf = /^\d+\.fls\.doubleclick\.net$/;
    function sf(a, b, c) {
        for (var d = la(a.split("&")), e = d.next(); !e.done; e = d.next()) {
            var f = la(e.value.split("="))
              , k = f.next().value
              , l = ma(f);
            if (decodeURIComponent(k.replace(/\+/g, " ")) === b) {
                var m = l.join("=");
                return c ? m : decodeURIComponent(m.replace(/\+/g, " "))
            }
        }
    }
    function tf(a, b, c, d, e) {
        b && (b = String(b).toLowerCase());
        if (b === "protocol" || b === "port")
            a.protocol = uf(a.protocol) || uf(E.location.protocol);
        b === "port" ? a.port = String(Number(a.hostname ? a.port : E.location.port) || (a.protocol === "http" ? 80 : a.protocol === "https" ? 443 : "")) : b === "host" && (a.hostname = (a.hostname || E.location.hostname).replace(qf, "").toLowerCase());
        return vf(a, b, c, d, e)
    }
    function vf(a, b, c, d, e) {
        var f, k = uf(a.protocol);
        b && (b = String(b).toLowerCase());
        switch (b) {
        case "url_no_fragment":
            f = wf(a);
            break;
        case "protocol":
            f = k;
            break;
        case "host":
            f = a.hostname.replace(qf, "").toLowerCase();
            if (c) {
                var l = /^www\d*\./.exec(f);
                l && l[0] && (f = f.substring(l[0].length))
            }
            break;
        case "port":
            f = String(Number(a.port) || (k === "http" ? 80 : k === "https" ? 443 : ""));
            break;
        case "path":
            a.pathname || a.hostname || $a("TAGGING", 1);
            f = a.pathname.substring(0, 1) === "/" ? a.pathname : "/" + a.pathname;
            var m = f.split("/");
            (d || []).indexOf(m[m.length - 1]) >= 0 && (m[m.length - 1] = "");
            f = m.join("/");
            break;
        case "query":
            f = a.search.replace("?", "");
            e && (f = sf(f, e));
            break;
        case "extension":
            var n = a.pathname.split(".");
            f = n.length > 1 ? n[n.length - 1] : "";
            f = f.split("/")[0];
            break;
        case "fragment":
            f = a.hash.replace("#", "");
            break;
        default:
            f = a && a.href
        }
        return f
    }
    function uf(a) {
        return a ? a.replace(":", "").toLowerCase() : ""
    }
    function wf(a) {
        var b = "";
        if (a && a.href) {
            var c = a.href.indexOf("#");
            b = c < 0 ? a.href : a.href.substring(0, c)
        }
        return b
    }
    var xf = {}
      , yf = 0;
    function zf(a) {
        var b = xf[a];
        if (!b) {
            var c = H.createElement("a");
            a && (c.href = a);
            var d = c.pathname;
            d[0] !== "/" && (a || $a("TAGGING", 1),
            d = "/" + d);
            var e = c.hostname.replace(qf, "");
            b = {
                href: c.href,
                protocol: c.protocol,
                host: c.host,
                hostname: e,
                pathname: d,
                search: c.search,
                hash: c.hash,
                port: c.port
            };
            yf < 5 && (xf[a] = b,
            yf++)
        }
        return b
    }
    function Af(a) {
        function b(n) {
            var p = n.split("=")[0];
            return d.indexOf(p) < 0 ? n : p + "=0"
        }
        function c(n) {
            return n.split("&").map(b).filter(function(p) {
                return p !== void 0
            }).join("&")
        }
        var d = "gclid dclid gbraid wbraid gclaw gcldc gclha gclgf gclgb _gl".split(" ")
          , e = zf(a)
          , f = a.split(/[?#]/)[0]
          , k = e.search
          , l = e.hash;
        k[0] === "?" && (k = k.substring(1));
        l[0] === "#" && (l = l.substring(1));
        k = c(k);
        l = c(l);
        k !== "" && (k = "?" + k);
        l !== "" && (l = "#" + l);
        var m = "" + f + k + l;
        m[m.length - 1] === "/" && (m = m.substring(0, m.length - 1));
        return m
    }
    function Bf(a) {
        var b = zf(E.location.href)
          , c = tf(b, "host", !1);
        if (c && c.match(rf)) {
            var d = tf(b, "path");
            if (d) {
                var e = d.split(a + "=");
                if (e.length > 1)
                    return e[1].split(";")[0].split("?")[0]
            }
        }
    }
    ;var Cf = {
        "https://www.google.com": "/g",
        "https://www.googleadservices.com": "/as",
        "https://pagead2.googlesyndication.com": "/gs"
    };
    function Df(a, b) {
        if (a) {
            var c = "" + a;
            c.indexOf("http://") !== 0 && c.indexOf("https://") !== 0 && (c = "https://" + c);
            c[c.length - 1] === "/" && (c = c.substring(0, c.length - 1));
            return zf("" + c + b).href
        }
    }
    function Ef(a, b) {
        if (bf() || Oe)
            return Df(a, b)
    }
    function Ff() {
        return !!Ge.Gf && Ge.Gf.split("@@").join("") !== "SGTM_TOKEN"
    }
    function Gf(a) {
        for (var b = la([M.g.yc, M.g.Eb]), c = b.next(); !c.done; c = b.next()) {
            var d = S(a, c.value);
            if (d)
                return d
        }
    }
    function Hf(a, b) {
        return bf() ? "" + af() + (b ? Cf[a] || "" : "") : a
    }
    ;function If(a) {
        var b = String(a[tc.ma] || "").replace(/_/g, "");
        return yb(b, "cvt") ? "cvt" : b
    }
    var Jf = E.location.search.indexOf("?gtm_latency=") >= 0 || E.location.search.indexOf("&gtm_latency=") >= 0;
    var Kf = {
        sampleRate: "0.005000",
        Wi: "",
        im: "0.007"
    }, Lf = Math.random(), Mf;
    if (!(Mf = Jf)) {
        var Nf = Kf.sampleRate;
        Mf = Lf < Number(Nf)
    }
    var Of = Mf
      , Pf = (Rb == null ? void 0 : Rb.includes("gtm_debug=d")) || Jf || Lf >= 1 - Number(Kf.im);
    var Qf = /gtag[.\/]js/
      , Rf = /gtm[.\/]js/
      , Sf = !1;
    function Tf(a) {
        if (Sf)
            return "1";
        var b = a.scriptSource;
        if (b) {
            if (Qf.test(b))
                return "3";
            if (Rf.test(b))
                return "2"
        }
        return "0"
    }
    function Uf(a) {
        var b = Vf();
        b.pending || (b.pending = []);
        jb(b.pending, function(c) {
            return c.target.ctid === a.ctid && c.target.isDestination === a.isDestination
        }) || b.pending.push({
            target: a,
            onLoad: void 0
        })
    }
    var Wf = function() {
        this.container = {};
        this.destination = {};
        this.canonical = {};
        this.pending = [];
        this.siloed = [];
        this.injectedFirstPartyContainers = {};
        var a;
        var b = E.google_tags_first_party || [];
        if (Array.isArray(b)) {
            for (var c = {}, d = la(b), e = d.next(); !e.done; e = d.next())
                c[e.value] = !0;
            a = Object.freeze(c)
        } else
            a = {};
        this.injectedFirstPartyContainers = a
    };
    function Vf() {
        var a = Sb("google_tag_data", {})
          , b = a.tidr;
        b || (b = new Wf,
        a.tidr = b);
        return b
    }
    ;var Xf = {}
      , Yf = !1
      , Zf = {
        ctid: "923371515",
        canonicalContainerId: "",
        Hi: "923371515",
        Ii: "923371515"
    };
    Xf.qd = pb("");
    function $f() {
        var a = ag();
        return Yf ? a.map(bg) : a
    }
    function cg() {
        var a = dg();
        return Yf ? a.map(bg) : a
    }
    function eg() {
        return fg(Zf.ctid)
    }
    function gg() {
        return fg(Zf.canonicalContainerId || "_" + Zf.ctid)
    }
    function ag() {
        return Zf.Hi ? Zf.Hi.split("|") : [Zf.ctid]
    }
    function dg() {
        return Zf.Ii ? Zf.Ii.split("|") : []
    }
    function hg() {
        var a = ig(jg())
          , b = a && a.parent;
        if (b)
            return ig(b)
    }
    function ig(a) {
        var b = Vf();
        return a.isDestination ? b.destination[a.ctid] : b.container[a.ctid]
    }
    function fg(a) {
        return Yf ? bg(a) : a
    }
    function bg(a) {
        return "siloed_" + a
    }
    function kg(a) {
        return Yf ? lg(a) : a
    }
    function lg(a) {
        a = String(a);
        return yb(a, "siloed_") ? a.substring(7) : a
    }
    function mg() {
        var a = !1;
        if (a) {
            var b = Vf();
            if (b.siloed) {
                for (var c = [], d = ag().map(bg), e = dg().map(bg), f = {}, k = 0; k < b.siloed.length; f = {
                    Qe: void 0
                },
                k++)
                    f.Qe = b.siloed[k],
                    !Yf && jb(f.Qe.isDestination ? e : d, function(l) {
                        return function(m) {
                            return m === l.Qe.ctid
                        }
                    }(f)) ? Yf = !0 : c.push(f.Qe);
                b.siloed = c
            }
        }
    }
    function ng() {
        var a = Vf();
        if (a.pending) {
            for (var b, c = [], d = !1, e = $f(), f = cg(), k = {}, l = 0; l < a.pending.length; k = {
                Od: void 0
            },
            l++)
                k.Od = a.pending[l],
                jb(k.Od.target.isDestination ? f : e, function(m) {
                    return function(n) {
                        return n === m.Od.target.ctid
                    }
                }(k)) ? d || (b = k.Od.onLoad,
                d = !0) : c.push(k.Od);
            a.pending = c;
            if (b)
                try {
                    b(gg())
                } catch (m) {}
        }
    }
    function og() {
        for (var a = Zf.ctid, b = $f(), c = cg(), d = function(n, p) {
            var q = {
                canonicalContainerId: Zf.canonicalContainerId,
                scriptContainerId: a,
                state: 2,
                containers: b.slice(),
                destinations: c.slice()
            };
            Qb && (q.scriptElement = Qb);
            Rb && (q.scriptSource = Rb);
            if (hg() === void 0) {
                var r;
                a: {
                    if ((q.scriptContainerId || "").indexOf("GTM-") >= 0) {
                        var t;
                        b: {
                            if (q.scriptSource) {
                                for (var u = $e.F, v = zf(q.scriptSource), w = u ? v.pathname : "" + v.hostname + v.pathname, x = H.scripts, y = "", z = 0; z < x.length; ++z) {
                                    var A = x[z];
                                    if (!(A.innerHTML.length === 0 || !u && A.innerHTML.indexOf(q.scriptContainerId || "SHOULD_NOT_BE_SET") < 0 || A.innerHTML.indexOf(w) < 0)) {
                                        if (A.innerHTML.indexOf("(function(w,d,s,l,i)") >= 0) {
                                            t = String(z);
                                            break b
                                        }
                                        y = String(z)
                                    }
                                }
                                if (y) {
                                    t = y;
                                    break b
                                }
                            }
                            t = void 0
                        }
                        var C = t;
                        if (C) {
                            Sf = !0;
                            r = C;
                            break a
                        }
                    }
                    var G = [].slice.call(document.scripts);
                    r = q.scriptElement ? String(G.indexOf(q.scriptElement)) : "-1"
                }
                q.htmlLoadOrder = r;
                q.loadScriptType = Tf(q)
            }
            var D = p ? e.destination : e.container
              , F = D[n];
            F ? (p && F.state === 0 && L(93),
            Object.assign(F, q)) : D[n] = q
        }, e = Vf(), f = la(b), k = f.next(); !k.done; k = f.next())
            d(k.value, !1);
        for (var l = la(c), m = l.next(); !m.done; m = l.next())
            d(m.value, !0);
        e.canonical[gg()] = {};
        ng()
    }
    function jg() {
        return {
            ctid: eg(),
            isDestination: Xf.qd
        }
    }
    function pg(a) {
        var b = Vf();
        (b.siloed = b.siloed || []).push(a)
    }
    function qg() {
        var a = Vf().container, b;
        for (b in a)
            if (a.hasOwnProperty(b) && a[b].state === 1)
                return !0;
        return !1
    }
    function rg() {
        var a = {};
        B(Vf().destination, function(b, c) {
            c.state === 0 && (a[lg(b)] = c)
        });
        return a
    }
    function sg(a) {
        return !!(a && a.parent && a.context && a.context.source === 1 && a.parent.ctid.indexOf("GTM-") !== 0)
    }
    var tg = "/td?id=" + Zf.ctid
      , ug = ["v", "t", "pid", "dl", "tdp"]
      , vg = ["mcc"]
      , wg = {}
      , xg = {};
    function yg(a, b, c) {
        xg[a] = b;
        (c === void 0 || c) && zg(a)
    }
    function zg(a, b) {
        if (wg[a] === void 0 || (b === void 0 ? 0 : b))
            wg[a] = !0
    }
    function Ag(a) {
        a = a === void 0 ? !1 : a;
        var b = Object.keys(wg).filter(function(c) {
            return wg[c] === !0 && xg[c] !== void 0 && (a || !vg.includes(c))
        }).map(function(c) {
            var d = xg[c];
            typeof d === "function" && (d = d());
            return d ? "&" + c + "=" + d : ""
        }).join("");
        return "" + Hf("https://www.googletagmanager.com") + tg + ("" + b + "&z=0")
    }
    function Bg() {
        Object.keys(wg).forEach(function(a) {
            ug.indexOf(a) < 0 && (wg[a] = !1)
        })
    }
    function Cg(a) {
        a = a === void 0 ? !1 : a;
        if (Pf && Zf.ctid) {
            var b = Ag(a);
            a ? jc(b) : $b(b);
            Bg()
        }
    }
    function Dg() {
        Object.keys(wg).filter(function(a) {
            return wg[a] && !ug.includes(a)
        }).length > 0 && Cg(!0)
    }
    var Eg = kb();
    function Fg() {
        Eg = kb()
    }
    function Gg() {
        yg("v", "3");
        yg("t", "t");
        yg("pid", function() {
            return String(Eg)
        });
        ac(E, "pagehide", Dg);
        E.setInterval(Fg, 864E5)
    }
    var Hg = new function(a, b) {
        this.m = a;
        this.defaultValue = b === void 0 ? !1 : b
    }
    (1933);
    function Ig() {
        var a = Sb("google_tag_data", {});
        return a.ics = a.ics || new Jg
    }
    var Jg = function() {
        this.entries = {};
        this.waitPeriodTimedOut = this.wasSetLate = this.accessedAny = this.accessedDefault = this.usedImplicit = this.usedUpdate = this.usedDefault = this.usedDeclare = this.active = !1;
        this.m = []
    };
    Jg.prototype.default = function(a, b, c, d, e, f, k) {
        this.usedDefault || this.usedDeclare || !this.accessedDefault && !this.accessedAny || (this.wasSetLate = !0);
        this.usedDefault = this.active = !0;
        $a("TAGGING", 19);
        b == null ? $a("TAGGING", 18) : Kg(this, a, b === "granted", c, d, e, f, k)
    }
    ;
    Jg.prototype.waitForUpdate = function(a, b, c) {
        for (var d = 0; d < a.length; d++)
            Kg(this, a[d], void 0, void 0, "", "", b, c)
    }
    ;
    var Kg = function(a, b, c, d, e, f, k, l) {
        var m = a.entries
          , n = m[b] || {}
          , p = n.region
          , q = d && h(d) ? d.toUpperCase() : void 0;
        e = e.toUpperCase();
        f = f.toUpperCase();
        if (e === "" || q === f || (q === e ? p !== f : !q && !p)) {
            var r = !!(k && k > 0 && n.update === void 0)
              , t = {
                region: q,
                declare_region: n.declare_region,
                implicit: n.implicit,
                default: c !== void 0 ? c : n.default,
                declare: n.declare,
                update: n.update,
                quiet: r
            };
            if (e !== "" || n.default !== !1)
                m[b] = t;
            r && E.setTimeout(function() {
                m[b] === t && t.quiet && ($a("TAGGING", 2),
                a.waitPeriodTimedOut = !0,
                a.clearTimeout(b, void 0, l),
                a.notifyListeners())
            }, k)
        }
    };
    ba = Jg.prototype;
    ba.clearTimeout = function(a, b, c) {
        var d = [a], e = c.delegatedConsentTypes, f;
        for (f in e)
            e.hasOwnProperty(f) && e[f] === a && d.push(f);
        var k = this.entries[a] || {}
          , l = this.getConsentState(a, c);
        if (k.quiet) {
            k.quiet = !1;
            for (var m = la(d), n = m.next(); !n.done; n = m.next())
                Lg(this, n.value)
        } else if (b !== void 0 && l !== b)
            for (var p = la(d), q = p.next(); !q.done; q = p.next())
                Lg(this, q.value)
    }
    ;
    ba.update = function(a, b, c) {
        this.usedDefault || this.usedDeclare || this.usedUpdate || !this.accessedAny || (this.wasSetLate = !0);
        this.usedUpdate = this.active = !0;
        if (b != null) {
            var d = this.getConsentState(a, c)
              , e = this.entries;
            (e[a] = e[a] || {}).update = b === "granted";
            this.clearTimeout(a, d, c)
        }
    }
    ;
    ba.declare = function(a, b, c, d, e) {
        this.usedDeclare = this.active = !0;
        var f = this.entries
          , k = f[a] || {}
          , l = k.declare_region
          , m = c && h(c) ? c.toUpperCase() : void 0;
        d = d.toUpperCase();
        e = e.toUpperCase();
        if (d === "" || m === e || (m === d ? l !== e : !m && !l)) {
            var n = {
                region: k.region,
                declare_region: m,
                declare: b === "granted",
                implicit: k.implicit,
                default: k.default,
                update: k.update,
                quiet: k.quiet
            };
            if (d !== "" || k.declare !== !1)
                f[a] = n
        }
    }
    ;
    ba.implicit = function(a, b) {
        this.usedImplicit = !0;
        var c = this.entries
          , d = c[a] = c[a] || {};
        d.implicit !== !1 && (d.implicit = b === "granted")
    }
    ;
    ba.getConsentState = function(a, b) {
        var c = this.entries
          , d = c[a] || {}
          , e = d.update;
        if (e !== void 0)
            return e ? 1 : 2;
        if (eb(8) && b.usedContainerScopedDefaults) {
            var f = b.containerScopedDefaults[a];
            if (f === 3)
                return 1;
            if (f === 2)
                return 2
        } else if (e = d.default,
        e !== void 0)
            return e ? 1 : 2;
        if (b == null ? 0 : b.delegatedConsentTypes.hasOwnProperty(a)) {
            var k = b.delegatedConsentTypes[a]
              , l = c[k] || {};
            e = l.update;
            if (e !== void 0)
                return e ? 1 : 2;
            if (eb(8) && b.usedContainerScopedDefaults) {
                var m = b.containerScopedDefaults[k];
                if (m === 3)
                    return 1;
                if (m === 2)
                    return 2
            } else if (e = l.default,
            e !== void 0)
                return e ? 1 : 2
        }
        e = d.declare;
        if (e !== void 0)
            return e ? 1 : 2;
        e = d.implicit;
        return e !== void 0 ? e ? 3 : 4 : 0
    }
    ;
    ba.addListener = function(a, b) {
        this.m.push({
            consentTypes: a,
            Hk: b
        })
    }
    ;
    var Lg = function(a, b) {
        for (var c = 0; c < a.m.length; ++c) {
            var d = a.m[c];
            Array.isArray(d.consentTypes) && d.consentTypes.indexOf(b) !== -1 && (d.Ji = !0)
        }
    };
    Jg.prototype.notifyListeners = function(a, b) {
        for (var c = 0; c < this.m.length; ++c) {
            var d = this.m[c];
            if (d.Ji) {
                d.Ji = !1;
                try {
                    d.Hk({
                        consentEventId: a,
                        consentPriorityId: b
                    })
                } catch (e) {}
            }
        }
    }
    ;
    var Mg = function(a) {
        Mg[" "](a);
        return a
    };
    Mg[" "] = function() {}
    ;
    var Og = function() {
        var a = Ng
          , b = "Yf";
        if (a.Yf && a.hasOwnProperty(b))
            return a.Yf;
        var c = new a;
        return a.Yf = c
    };
    var Ng = function() {
        var a = {};
        this.m = function() {
            var b = Hg.m
              , c = Hg.defaultValue;
            return a[b] != null ? a[b] : c
        }
        ;
        this.D = function() {
            a[Hg.m] = !0
        }
    };
    var Pg = !1
      , Qg = !1
      , Rg = {}
      , Sg = {
        delegatedConsentTypes: {},
        corePlatformServices: {},
        usedCorePlatformServices: !1,
        selectedAllCorePlatformServices: !1,
        containerScopedDefaults: (Rg.ad_storage = 1,
        Rg.analytics_storage = 1,
        Rg.ad_user_data = 1,
        Rg.ad_personalization = 1,
        Rg),
        usedContainerScopedDefaults: !1
    };
    function Tg(a) {
        var b = Ig();
        b.accessedAny = !0;
        return (h(a) ? [a] : a).every(function(c) {
            switch (b.getConsentState(c, Sg)) {
            case 1:
            case 3:
                return !0;
            case 2:
            case 4:
                return !1;
            default:
                return !0
            }
        })
    }
    function Ug(a) {
        var b = Ig();
        b.accessedAny = !0;
        return b.getConsentState(a, Sg)
    }
    function Vg(a) {
        for (var b = {}, c = la(a), d = c.next(); !d.done; d = c.next()) {
            var e = d.value;
            b[e] = Sg.corePlatformServices[e] !== !1
        }
        return b
    }
    function Wg(a) {
        var b = Ig();
        b.accessedAny = !0;
        return !(b.entries[a] || {}).quiet
    }
    function Xg() {
        if (!Og().m())
            return !1;
        var a = Ig();
        a.accessedAny = !0;
        if (a.active)
            return !0;
        if (!eb(8) || !Sg.usedContainerScopedDefaults)
            return !1;
        for (var b = la(Object.keys(Sg.containerScopedDefaults)), c = b.next(); !c.done; c = b.next())
            if (Sg.containerScopedDefaults[c.value] !== 1)
                return !0;
        return !1
    }
    function Yg(a, b) {
        Ig().addListener(a, b)
    }
    function Zg(a, b) {
        Ig().notifyListeners(a, b)
    }
    function $g(a, b) {
        function c() {
            for (var e = 0; e < b.length; e++)
                if (!Wg(b[e]))
                    return !0;
            return !1
        }
        if (c()) {
            var d = !1;
            Yg(b, function(e) {
                d || c() || (d = !0,
                a(e))
            })
        } else
            a({})
    }
    function ah(a, b) {
        function c() {
            for (var l = [], m = 0; m < e.length; m++) {
                var n = e[m];
                Tg(n) && !f[n] && l.push(n)
            }
            return l
        }
        function d(l) {
            for (var m = 0; m < l.length; m++)
                f[l[m]] = !0
        }
        var e = h(b) ? [b] : b
          , f = {}
          , k = c();
        k.length !== e.length && (d(k),
        Yg(e, function(l) {
            function m(q) {
                q.length !== 0 && (d(q),
                l.consentTypes = q,
                a(l))
            }
            var n = c();
            if (n.length !== 0) {
                var p = Object.keys(f).length;
                n.length + p >= e.length ? m(n) : E.setTimeout(function() {
                    m(c())
                }, 500)
            }
        }))
    }
    ;var bh = ["ad_storage", "analytics_storage", "ad_user_data", "ad_personalization"]
      , ch = !1
      , dh = !1;
    function eh() {
        P(48) && !dh && ch && (bh.some(function(a) {
            return Sg.containerScopedDefaults[a] !== 1
        }) || fh("mbc"));
        dh = !0
    }
    function fh(a) {
        Pf && (yg(a, "1"),
        Cg())
    }
    function gh(a) {
        $a("HEALTH", a)
    }
    ;var hh;
    try {
        hh = JSON.parse(Ya("eyIwIjoiQ04iLCIxIjoiQ04tNDQiLCIyIjp0cnVlLCIzIjoiZ29vZ2xlLmNuIiwiNCI6IiIsIjUiOnRydWUsIjYiOmZhbHNlLCI3IjoiYWRfc3RvcmFnZXxhbmFseXRpY3Nfc3RvcmFnZXxhZF91c2VyX2RhdGF8YWRfcGVyc29uYWxpemF0aW9uIn0"))
    } catch (a) {
        L(123),
        gh(2),
        hh = {}
    }
    function ih() {
        return hh["1"] || ""
    }
    function jh() {
        var a = !1;
        return a
    }
    function kh() {
        var a = "";
        return a
    }
    function lh() {
        var a = !1;
        return a
    }
    function mh() {
        var a = "";
        return a
    }
    var nh = [M.g.O, M.g.P, M.g.M, M.g.na], oh, ph;
    function qh(a) {
        for (var b = a[M.g.Td], c = Array.isArray(b) ? b : [b], d = {
            Ed: 0
        }; d.Ed < c.length; d = {
            Ed: d.Ed
        },
        ++d.Ed)
            B(a, function(e) {
                return function(f, k) {
                    if (f !== M.g.Td) {
                        var l = c[e.Ed]
                          , m = hh["0"] || ""
                          , n = ih();
                        Qg = !0;
                        Pg && $a("TAGGING", 20);
                        Ig().declare(f, k, l, m, n)
                    }
                }
            }(d))
    }
    function rh(a) {
        eh();
        !ph && oh && fh("crc");
        ph = !0;
        var b = a[M.g.Td];
        b && L(40);
        var c = a[M.g.xg];
        c && L(41);
        for (var d = Array.isArray(b) ? b : [b], e = {
            Fd: 0
        }; e.Fd < d.length; e = {
            Fd: e.Fd
        },
        ++e.Fd)
            B(a, function(f) {
                return function(k, l) {
                    if (k !== M.g.Td && k !== M.g.xg) {
                        var m = d[f.Fd]
                          , n = Number(c)
                          , p = hh["0"] || ""
                          , q = ih();
                        n = n === void 0 ? 0 : n;
                        Pg = !0;
                        Qg && $a("TAGGING", 20);
                        Ig().default(k, l, m, p, q, n, Sg)
                    }
                }
            }(e))
    }
    function sh(a, b) {
        eh();
        oh = !0;
        B(a, function(c, d) {
            Pg = !0;
            Qg && $a("TAGGING", 20);
            Ig().update(c, d, Sg)
        });
        Zg(b.eventId, b.priorityId)
    }
    function T(a) {
        Array.isArray(a) || (a = [a]);
        return a.every(function(b) {
            return Tg(b)
        })
    }
    function th(a, b) {
        Yg(a, b)
    }
    function uh(a, b) {
        ah(a, b)
    }
    function vh(a, b) {
        $g(a, b)
    }
    function wh() {
        var a = [M.g.O, M.g.na, M.g.M];
        Ig().waitForUpdate(a, 500, Sg)
    }
    function xh(a) {
        for (var b = la(a), c = b.next(); !c.done; c = b.next()) {
            var d = c.value;
            Ig().clearTimeout(d, void 0, Sg)
        }
        Zg()
    }
    var yh = function() {
        var a, b, c, d;
        La(new Ka(new Fa(function(e) {
            if (e.m == 1) {
                if (He.pscdl !== void 0)
                    return e.return();
                a = function(f) {
                    He.pscdl = f
                }
                ;
                b = function() {
                    a("error")
                }
                ;
                e.N = 2;
                c = Ob;
                if (!("cookieDeprecationLabel"in c)) {
                    a("noapi");
                    e.m = 4;
                    return
                }
                a("pending");
                return Ca(e, c.cookieDeprecationLabel.getValue().then(a).catch(b))
            }
            e.m != 2 ? (e.m = 0,
            e.N = 0) : (d = Ea(e),
            b(d),
            e.m = 0)
        }
        )))
    };
    function zh(a, b) {
        P(12) && b && B(b, function(c, d) {
            typeof d !== "object" && d !== void 0 && (a["1p." + c] = String(d))
        })
    }
    ;var Ah = /[A-Z]+/
      , Bh = /\s/;
    function Ch(a, b) {
        if (h(a)) {
            a = rb(a);
            var c = a.indexOf("-");
            if (!(c < 0)) {
                var d = a.substring(0, c);
                if (Ah.test(d)) {
                    var e = a.substring(c + 1), f;
                    if (b) {
                        var k = function(n) {
                            var p = n.indexOf("/");
                            return p < 0 ? [n] : [n.substring(0, p), n.substring(p + 1)]
                        };
                        f = k(e);
                        if (d === "DC" && f.length === 2) {
                            var l = k(f[1]);
                            l.length === 2 && (f[1] = l[0],
                            f.push(l[1]))
                        }
                    } else {
                        f = e.split("/");
                        for (var m = 0; m < f.length; m++)
                            if (!f[m] || Bh.test(f[m]) && (d !== "AW" || m !== 1))
                                return
                    }
                    return {
                        id: a,
                        prefix: d,
                        da: d + "-" + f[0],
                        fa: f
                    }
                }
            }
        }
    }
    function Dh(a, b) {
        for (var c = {}, d = 0; d < a.length; ++d) {
            var e = Ch(a[d], b);
            e && (c[e.id] = e)
        }
        Eh(c);
        var f = [];
        B(c, function(k, l) {
            f.push(l)
        });
        return f
    }
    function Eh(a) {
        var b = [], c;
        for (c in a)
            if (a.hasOwnProperty(c)) {
                var d = a[c];
                d.prefix === "AW" && d.fa[Fh[2]] && b.push(d.da)
            }
        for (var e = 0; e < b.length; ++e)
            delete a[b[e]]
    }
    var Gh = {}
      , Fh = (Gh[0] = 0,
    Gh[1] = 0,
    Gh[2] = 1,
    Gh[3] = 0,
    Gh[4] = 1,
    Gh[5] = 2,
    Gh[6] = 0,
    Gh[7] = 0,
    Gh[8] = 0,
    Gh);
    var Hh = Number('') || 500
      , Ih = {}
      , Jh = {}
      , Kh = {
        initialized: 11,
        complete: 12,
        interactive: 13
    }
      , Lh = {}
      , Mh = Object.freeze((Lh[M.g.Ha] = !0,
    Lh))
      , Nh = H.location.search.indexOf("?gtm_diagnostics=") >= 0 || H.location.search.indexOf("&gtm_diagnostics=") >= 0
      , Oh = void 0;
    function Ph(a, b) {
        if (b.length && Pf) {
            var c;
            (c = Ih)[a] != null || (c[a] = []);
            Jh[a] != null || (Jh[a] = []);
            var d = b.filter(function(e) {
                return !Jh[a].includes(e)
            });
            Ih[a].push.apply(Ih[a], na(d));
            Jh[a].push.apply(Jh[a], na(d));
            !Oh && d.length > 0 && (zg("tdc", !0),
            Oh = E.setTimeout(function() {
                Cg();
                Ih = {};
                Oh = void 0
            }, Hh))
        }
    }
    function Qh(a, b, c) {
        if (Pf && a === "config") {
            var d, e = (d = Ch(b)) == null ? void 0 : d.fa;
            if (!(e && e.length > 1)) {
                var f, k = Sb("google_tag_data", {});
                k.td || (k.td = {});
                f = k.td;
                var l = g(c.J);
                g(c.m, l);
                var m = [], n;
                for (n in f)
                    if (f.hasOwnProperty(n)) {
                        var p = Rh(f[n], l);
                        p.length && (Nh && console.log(p),
                        m.push(n))
                    }
                m.length && (Ph(b, m),
                $a("TAGGING", Kh[H.readyState] || 14));
                f[b] = l
            }
        }
    }
    function Sh(a, b) {
        var c = {}, d;
        for (d in b)
            b.hasOwnProperty(d) && (c[d] = !0);
        for (var e in a)
            a.hasOwnProperty(e) && (c[e] = !0);
        return c
    }
    function Rh(a, b, c, d) {
        c = c === void 0 ? {} : c;
        d = d === void 0 ? "" : d;
        if (a === b)
            return [];
        var e = function(r, t) {
            var u;
            Qa(t) === "object" ? u = t[r] : Qa(t) === "array" && (u = t[r]);
            return u === void 0 ? Mh[r] : u
        }, f = Sh(a, b), k;
        for (k in f)
            if (f.hasOwnProperty(k)) {
                var l = (d ? d + "." : "") + k
                  , m = e(k, a)
                  , n = e(k, b)
                  , p = Qa(m) === "object" || Qa(m) === "array"
                  , q = Qa(n) === "object" || Qa(n) === "array";
                if (p && q)
                    Rh(m, n, c, l);
                else if (p || q || m !== n)
                    c[l] = !0
            }
        return Object.keys(c)
    }
    function Th() {
        yg("tdc", function() {
            Oh && (E.clearTimeout(Oh),
            Oh = void 0);
            var a = [], b;
            for (b in Ih)
                Ih.hasOwnProperty(b) && a.push(b + "*" + Ih[b].join("."));
            return a.length ? a.join("!") : void 0
        }, !1)
    }
    ;var Uh = function(a, b, c, d, e, f, k, l, m, n, p) {
        this.eventId = a;
        this.priorityId = b;
        this.m = c;
        this.N = d;
        this.F = e;
        this.J = f;
        this.D = k;
        this.eventMetadata = l;
        this.onSuccess = m;
        this.onFailure = n;
        this.isGtmEvent = p
    }
      , Vh = function(a, b) {
        var c = [];
        switch (b) {
        case 3:
            c.push(a.m);
            c.push(a.N);
            c.push(a.F);
            c.push(a.J);
            c.push(a.D);
            break;
        case 2:
            c.push(a.m);
            break;
        case 1:
            c.push(a.N);
            c.push(a.F);
            c.push(a.J);
            c.push(a.D);
            break;
        case 4:
            c.push(a.m),
            c.push(a.N),
            c.push(a.F),
            c.push(a.J)
        }
        return c
    }
      , S = function(a, b, c, d) {
        for (var e = la(Vh(a, d === void 0 ? 3 : d)), f = e.next(); !f.done; f = e.next()) {
            var k = f.value;
            if (k[b] !== void 0)
                return k[b]
        }
        return c
    }
      , Wh = function(a) {
        for (var b = {}, c = Vh(a, 4), d = la(c), e = d.next(); !e.done; e = d.next())
            for (var f = Object.keys(e.value), k = la(f), l = k.next(); !l.done; l = k.next())
                b[l.value] = 1;
        return Object.keys(b)
    }
      , Xh = function(a, b, c) {
        function d(n) {
            Sa(n) && B(n, function(p, q) {
                f = !0;
                e[p] = q
            })
        }
        var e = {}
          , f = !1
          , k = Vh(a, c === void 0 ? 3 : c);
        k.reverse();
        for (var l = la(k), m = l.next(); !m.done; m = l.next())
            d(m.value[b]);
        return f ? e : void 0
    }
      , Yh = function(a) {
        for (var b = [M.g.Tc, M.g.Pc, M.g.Qc, M.g.Rc, M.g.Sc, M.g.Uc, M.g.Vc], c = Vh(a, 3), d = la(c), e = d.next(); !e.done; e = d.next()) {
            for (var f = e.value, k = {}, l = !1, m = la(b), n = m.next(); !n.done; n = m.next()) {
                var p = n.value;
                f[p] !== void 0 && (k[p] = f[p],
                l = !0)
            }
            var q = l ? k : void 0;
            if (q)
                return q
        }
        return {}
    }
      , Zh = function(a, b) {
        this.eventId = a;
        this.priorityId = b;
        this.D = {};
        this.N = {};
        this.m = {};
        this.F = {};
        this.R = {};
        this.J = {};
        this.eventMetadata = {};
        this.isGtmEvent = !1;
        this.onSuccess = function() {}
        ;
        this.onFailure = function() {}
    }
      , $h = function(a, b) {
        a.D = b;
        return a
    }
      , ai = function(a, b) {
        a.N = b;
        return a
    }
      , bi = function(a, b) {
        a.m = b;
        return a
    }
      , ci = function(a, b) {
        a.F = b;
        return a
    }
      , di = function(a, b) {
        a.R = b;
        return a
    }
      , ei = function(a, b) {
        a.J = b;
        return a
    }
      , fi = function(a, b) {
        a.eventMetadata = b || {};
        return a
    }
      , gi = function(a, b) {
        a.onSuccess = b;
        return a
    }
      , hi = function(a, b) {
        a.onFailure = b;
        return a
    }
      , ii = function(a, b) {
        a.isGtmEvent = b;
        return a
    }
      , ji = function(a) {
        return new Uh(a.eventId,a.priorityId,a.D,a.N,a.m,a.F,a.J,a.eventMetadata,a.onSuccess,a.onFailure,a.isGtmEvent)
    };
    var ki = {
        Vi: Number("5"),
        dn: Number("")
    }
      , li = [];
    function mi(a) {
        li.push(a)
    }
    var ni = "?id=" + Zf.ctid
      , oi = void 0
      , pi = {}
      , qi = void 0
      , ri = new function() {
        var a = 5;
        ki.Vi > 0 && (a = ki.Vi);
        this.D = a;
        this.m = 0;
        this.F = []
    }
      , si = 1E3;
    function ti(a, b) {
        var c = oi;
        if (c === void 0)
            if (b)
                c = Ye();
            else
                return "";
        for (var d = [Hf("https://www.googletagmanager.com"), "/a", ni], e = la(li), f = e.next(); !f.done; f = e.next())
            for (var k = f.value, l = k({
                eventId: c,
                Ib: !!a
            }), m = la(l), n = m.next(); !n.done; n = m.next()) {
                var p = la(n.value)
                  , q = p.next().value
                  , r = p.next().value;
                d.push("&" + q + "=" + r)
            }
        d.push("&z=0");
        return d.join("")
    }
    function ui() {
        qi && (E.clearTimeout(qi),
        qi = void 0);
        if (oi !== void 0 && vi) {
            var a;
            (a = pi[oi]) || (a = ri.m < ri.D ? !1 : tb() - ri.F[ri.m % ri.D] < 1E3);
            if (a || si-- <= 0)
                L(1),
                pi[oi] = !0;
            else {
                var b = ri.m++ % ri.D;
                ri.F[b] = tb();
                var c = ti(!0);
                $b(c);
                vi = !1
            }
        }
    }
    var vi = !1;
    function wi(a) {
        pi[a] || (a !== oi && (ui(),
        oi = a),
        vi = !0,
        qi || (qi = E.setTimeout(ui, 500)),
        ti().length >= 2022 && ui())
    }
    var xi = kb();
    function yi() {
        xi = kb()
    }
    function zi() {
        return [["v", "3"], ["t", "t"], ["pid", String(xi)]]
    }
    var Ai = {};
    function Bi(a, b, c) {
        Of && a !== void 0 && (Ai[a] = Ai[a] || [],
        Ai[a].push(c + b),
        wi(a))
    }
    function Ci(a) {
        var b = a.eventId
          , c = a.Ib
          , d = []
          , e = Ai[b] || [];
        e.length && d.push(["epr", e.join(".")]);
        c && delete Ai[b];
        return d
    }
    ;function Di(a, b, c, d) {
        var e = Ch(c, d.isGtmEvent);
        e && Ei.push("event", [b, a], e, d)
    }
    function Fi(a, b, c, d) {
        var e = Ch(c, d.isGtmEvent);
        e && Ei.push("get", [a, b], e, d)
    }
    var Gi = function() {
        this.J = {};
        this.m = {};
        this.N = {};
        this.R = null;
        this.F = {};
        this.D = !1;
        this.status = 1
    }
      , Hi = function(a, b, c, d) {
        this.D = tb();
        this.m = b;
        this.args = c;
        this.messageContext = d;
        this.type = a
    }
      , Ii = function() {
        this.destinations = {};
        this.D = {};
        this.m = []
    }
      , Ji = function(a, b) {
        var c = b.da;
        return a.destinations[c] = a.destinations[c] || new Gi
    }
      , Ki = function(a, b, c, d) {
        if (d.m) {
            var e = Ji(a, d.m)
              , f = e.R;
            if (f) {
                var k = g(c, null)
                  , l = g(e.J[d.m.id], null)
                  , m = g(e.F, null)
                  , n = g(e.m, null)
                  , p = g(a.D, null)
                  , q = {};
                if (Of)
                    try {
                        q = g(ef)
                    } catch (v) {
                        L(72)
                    }
                var r = d.m.prefix
                  , t = function(v) {
                    Bi(d.messageContext.eventId, r, v)
                }
                  , u = ji(ii(hi(gi(fi(di(ci(ei(bi(ai($h(new Zh(d.messageContext.eventId,d.messageContext.priorityId), k), l), m), n), p), q), d.messageContext.eventMetadata), function() {
                    if (t) {
                        var v = t;
                        t = void 0;
                        v("2");
                        if (d.messageContext.onSuccess)
                            d.messageContext.onSuccess()
                    }
                }), function() {
                    if (t) {
                        var v = t;
                        t = void 0;
                        v("3");
                        if (d.messageContext.onFailure)
                            d.messageContext.onFailure()
                    }
                }), !!d.messageContext.isGtmEvent));
                try {
                    Bi(d.messageContext.eventId, r, "1"),
                    Qh(d.type, d.m.id, u),
                    f(d.m.id, b, d.D, u)
                } catch (v) {
                    Bi(d.messageContext.eventId, r, "4")
                }
            }
        }
    };
    Ii.prototype.register = function(a, b, c) {
        var d = Ji(this, a);
        d.status !== 3 && (d.R = b,
        d.status = 3,
        c && (g(d.m, c),
        d.m = c),
        this.flush())
    }
    ;
    Ii.prototype.push = function(a, b, c, d) {
        c !== void 0 && (Ji(this, c).status === 1 && (Ji(this, c).status = 2,
        this.push("require", [{}], c, {})),
        Ji(this, c).D && (d.deferrable = !1));
        this.m.push(new Hi(a,c,b,d));
        d.deferrable || this.flush()
    }
    ;
    Ii.prototype.flush = function(a) {
        for (var b = this, c = [], d = !1, e = {}; this.m.length; e = {
            Tb: void 0,
            Rf: void 0
        }) {
            var f = this.m[0]
              , k = f.m;
            if (f.messageContext.deferrable)
                !k || Ji(this, k).D ? (f.messageContext.deferrable = !1,
                this.m.push(f)) : c.push(f),
                this.m.shift();
            else {
                switch (f.type) {
                case "require":
                    if (Ji(this, k).status !== 3 && !a) {
                        this.m.push.apply(this.m, c);
                        return
                    }
                    break;
                case "set":
                    B(f.args[0], function(r, t) {
                        g(Ab(r, t), b.D)
                    });
                    break;
                case "config":
                    var l = Ji(this, k);
                    e.Tb = {};
                    B(f.args[0], function(r) {
                        return function(t, u) {
                            g(Ab(t, u), r.Tb)
                        }
                    }(e));
                    var m = !!e.Tb[M.g.Rb];
                    delete e.Tb[M.g.Rb];
                    var n = k.da === k.id;
                    m || (n ? l.F = {} : l.J[k.id] = {});
                    l.D && m || Ki(this, M.g.X, e.Tb, f);
                    l.D = !0;
                    n ? g(e.Tb, l.F) : (g(e.Tb, l.J[k.id]),
                    L(70));
                    d = !0;
                    break;
                case "event":
                    e.Rf = {};
                    B(f.args[0], function(r) {
                        return function(t, u) {
                            g(Ab(t, u), r.Rf)
                        }
                    }(e));
                    Ki(this, f.args[1], e.Rf, f);
                    break;
                case "get":
                    var p = {}
                      , q = (p[M.g.nb] = f.args[0],
                    p[M.g.yb] = f.args[1],
                    p);
                    Ki(this, M.g.Oa, q, f)
                }
                this.m.shift();
                Li(this, f)
            }
        }
        this.m.push.apply(this.m, c);
        d && this.flush()
    }
    ;
    var Li = function(a, b) {
        if (b.type !== "require")
            if (b.m)
                for (var c = Ji(a, b.m).N[b.type] || [], d = 0; d < c.length; d++)
                    c[d]();
            else
                for (var e in a.destinations)
                    if (a.destinations.hasOwnProperty(e)) {
                        var f = a.destinations[e];
                        if (f && f.N)
                            for (var k = f.N[b.type] || [], l = 0; l < k.length; l++)
                                k[l]()
                    }
    }
      , Mi = function(a, b) {
        var c = Ei
          , d = g(b, null);
        g(Ji(c, a).m, d);
        Ji(c, a).m = d
    }
      , Ei = new Ii;
    var Ni = function(a, b) {
        var c = function() {};
        c.prototype = a.prototype;
        var d = new c;
        a.apply(d, Array.prototype.slice.call(arguments, 1));
        return d
    }
      , Oi = function(a) {
        var b = a;
        return function() {
            if (b) {
                var c = b;
                b = null;
                c()
            }
        }
    };
    var Pi = function(a, b, c) {
        a.addEventListener && a.addEventListener(b, c, !1)
    }
      , Qi = function(a, b, c) {
        a.removeEventListener && a.removeEventListener(b, c, !1)
    };
    var Ri, Si;
    a: {
        for (var Ti = ["CLOSURE_FLAGS"], Ui = Na, Vi = 0; Vi < Ti.length; Vi++)
            if (Ui = Ui[Ti[Vi]],
            Ui == null) {
                Si = null;
                break a
            }
        Si = Ui
    }
    var Wi = Si && Si[610401301];
    Ri = Wi != null ? Wi : !1;
    var Xi, Yi = Na.navigator;
    Xi = Yi ? Yi.userAgentData || null : null;
    function Zi(a) {
        return Ri ? Xi ? Xi.brands.some(function(b) {
            var c;
            return (c = b.brand) && c.indexOf(a) != -1
        }) : !1 : !1
    }
    function $i(a) {
        var b;
        a: {
            var c = Na.navigator;
            if (c) {
                var d = c.userAgent;
                if (d) {
                    b = d;
                    break a
                }
            }
            b = ""
        }
        return b.indexOf(a) != -1
    }
    ;function aj() {
        return Ri ? !!Xi && Xi.brands.length > 0 : !1
    }
    function bj() {
        return aj() ? Zi("Chromium") : ($i("Chrome") || $i("CriOS")) && !(aj() ? 0 : $i("Edge")) || $i("Silk")
    }
    ;var cj = function(a, b, c, d) {
        for (var e = b, f = c.length; (e = a.indexOf(c, e)) >= 0 && e < d; ) {
            var k = a.charCodeAt(e - 1);
            if (k == 38 || k == 63) {
                var l = a.charCodeAt(e + f);
                if (!l || l == 61 || l == 38 || l == 35)
                    return e
            }
            e += f + 1
        }
        return -1
    }
      , dj = /#|$/
      , ej = function(a, b) {
        var c = a.search(dj)
          , d = cj(a, 0, b, c);
        if (d < 0)
            return null;
        var e = a.indexOf("&", d);
        if (e < 0 || e > c)
            e = c;
        d += b.length + 1;
        return decodeURIComponent(a.slice(d, e !== -1 ? e : 0).replace(/\+/g, " "))
    }
      , fj = /[?&]($|#)/
      , gj = function(a, b, c) {
        for (var d, e = a.search(dj), f = 0, k, l = []; (k = cj(a, f, b, e)) >= 0; )
            l.push(a.substring(f, k)),
            f = Math.min(a.indexOf("&", k) + 1 || e, e);
        l.push(a.slice(f));
        d = l.join("").replace(fj, "$1");
        var m, n = c != null ? "=" + encodeURIComponent(String(c)) : "";
        var p = b + n;
        if (p) {
            var q, r = d.indexOf("#");
            r < 0 && (r = d.length);
            var t = d.indexOf("?"), u;
            t < 0 || t > r ? (t = r,
            u = "") : u = d.substring(t + 1, r);
            q = [d.slice(0, t), u, d.slice(r)];
            var v = q[1];
            q[1] = p ? v ? v + "&" + p : p : v;
            m = q[0] + (q[1] ? "?" + q[1] : "") + q[2]
        } else
            m = d;
        return m
    };
    var hj = function(a) {
        try {
            var b;
            if (b = !!a && a.location.href != null)
                a: {
                    try {
                        Mg(a.foo);
                        b = !0;
                        break a
                    } catch (c) {}
                    b = !1
                }
            return b
        } catch (c) {
            return !1
        }
    }
      , ij = function(a, b) {
        if (a)
            for (var c in a)
                Object.prototype.hasOwnProperty.call(a, c) && b(a[c], c, a)
    }
      , jj = function(a) {
        if (E.top == E)
            return 0;
        if (a === void 0 ? 0 : a) {
            var b = E.location.ancestorOrigins;
            if (b)
                return b[b.length - 1] == E.location.origin ? 1 : 2
        }
        return hj(E.top) ? 1 : 2
    }
      , kj = function(a) {
        a = a === void 0 ? document : a;
        return a.createElement("img")
    };
    function lj(a, b, c, d) {
        d = d === void 0 ? !1 : d;
        a.google_image_requests || (a.google_image_requests = []);
        var e = kj(a.document);
        if (c) {
            var f = function() {
                if (c) {
                    var k = a.google_image_requests
                      , l = Kb(k, e);
                    l >= 0 && Array.prototype.splice.call(k, l, 1)
                }
                Qi(e, "load", f);
                Qi(e, "error", f)
            };
            Pi(e, "load", f);
            Pi(e, "error", f)
        }
        d && (e.attributionSrc = "");
        e.src = b;
        a.google_image_requests.push(e)
    }
    var nj = function(a) {
        var b;
        b = b === void 0 ? !1 : b;
        var c = "https://pagead2.googlesyndication.com/pagead/gen_204?id=tcfe";
        ij(a, function(d, e) {
            if (d || d === 0)
                c += "&" + e + "=" + encodeURIComponent("" + d)
        });
        mj(c, b)
    }
      , mj = function(a, b) {
        var c = window, d;
        b = b === void 0 ? !1 : b;
        d = d === void 0 ? !1 : d;
        if (c.fetch) {
            var e = {
                keepalive: !0,
                credentials: "include",
                redirect: "follow",
                method: "get",
                mode: "no-cors"
            };
            d && (e.mode = "cors",
            "setAttributionReporting"in XMLHttpRequest.prototype ? e.attributionReporting = {
                eventSourceEligible: "true",
                triggerEligible: "false"
            } : e.headers = {
                "Attribution-Reporting-Eligible": "event-source"
            });
            c.fetch(a, e)
        } else
            lj(c, a, b === void 0 ? !1 : b, d === void 0 ? !1 : d)
    };
    var oj = function() {
        this.N = this.N;
        this.D = this.D
    };
    oj.prototype.N = !1;
    oj.prototype.dispose = function() {
        this.N || (this.N = !0,
        this.sa())
    }
    ;
    oj.prototype[Symbol.dispose] = function() {
        this.dispose()
    }
    ;
    oj.prototype.addOnDisposeCallback = function(a, b) {
        this.N ? b !== void 0 ? a.call(b) : a() : (this.D || (this.D = []),
        b && (a = a.bind(b)),
        this.D.push(a))
    }
    ;
    oj.prototype.sa = function() {
        if (this.D)
            for (; this.D.length; )
                this.D.shift()()
    }
    ;
    var pj = function(a) {
        a.addtlConsent !== void 0 && typeof a.addtlConsent !== "string" && (a.addtlConsent = void 0);
        a.gdprApplies !== void 0 && typeof a.gdprApplies !== "boolean" && (a.gdprApplies = void 0);
        return a.tcString !== void 0 && typeof a.tcString !== "string" || a.listenerId !== void 0 && typeof a.listenerId !== "number" ? 2 : a.cmpStatus && a.cmpStatus !== "error" ? 0 : 3
    }
      , qj = function(a, b) {
        b = b === void 0 ? {} : b;
        oj.call(this);
        this.F = a;
        this.m = null;
        this.R = {};
        this.He = 0;
        var c;
        this.pd = (c = b.bm) != null ? c : 500;
        var d;
        this.Xa = (d = b.Lm) != null ? d : !1;
        this.J = null
    };
    xa(qj, oj);
    qj.prototype.sa = function() {
        this.R = {};
        this.J && (Qi(this.F, "message", this.J),
        delete this.J);
        delete this.R;
        delete this.F;
        delete this.m;
        oj.prototype.sa.call(this)
    }
    ;
    var sj = function(a) {
        return typeof a.F.__tcfapi === "function" || rj(a) != null
    };
    qj.prototype.addEventListener = function(a) {
        var b = this
          , c = {
            internalBlockOnErrors: this.Xa
        }
          , d = Oi(function() {
            return a(c)
        })
          , e = 0;
        this.pd !== -1 && (e = setTimeout(function() {
            c.tcString = "tcunavailable";
            c.internalErrorState = 1;
            d()
        }, this.pd));
        var f = function(k, l) {
            clearTimeout(e);
            k ? (c = k,
            c.internalErrorState = pj(c),
            c.internalBlockOnErrors = b.Xa,
            l && c.internalErrorState === 0 || (c.tcString = "tcunavailable",
            l || (c.internalErrorState = 3))) : (c.tcString = "tcunavailable",
            c.internalErrorState = 3);
            a(c)
        };
        try {
            tj(this, "addEventListener", f)
        } catch (k) {
            c.tcString = "tcunavailable",
            c.internalErrorState = 3,
            e && (clearTimeout(e),
            e = 0),
            d()
        }
    }
    ;
    qj.prototype.removeEventListener = function(a) {
        a && a.listenerId && tj(this, "removeEventListener", null, a.listenerId)
    }
    ;
    var vj = function(a, b, c) {
        var d;
        d = d === void 0 ? "755" : d;
        var e;
        a: {
            if (a.publisher && a.publisher.restrictions) {
                var f = a.publisher.restrictions[b];
                if (f !== void 0) {
                    e = f[d === void 0 ? "755" : d];
                    break a
                }
            }
            e = void 0
        }
        var k = e;
        if (k === 0)
            return !1;
        var l = c;
        c === 2 ? (l = 0,
        k === 2 && (l = 1)) : c === 3 && (l = 1,
        k === 1 && (l = 0));
        var m;
        if (l === 0)
            if (a.purpose && a.vendor) {
                var n = uj(a.vendor.consents, d === void 0 ? "755" : d);
                m = n && b === "1" && a.purposeOneTreatment && a.publisherCC === "CH" ? !0 : n && uj(a.purpose.consents, b)
            } else
                m = !0;
        else
            m = l === 1 ? a.purpose && a.vendor ? uj(a.purpose.legitimateInterests, b) && uj(a.vendor.legitimateInterests, d === void 0 ? "755" : d) : !0 : !0;
        return m
    }
      , uj = function(a, b) {
        return !(!a || !a[b])
    }
      , tj = function(a, b, c, d) {
        c || (c = function() {}
        );
        if (typeof a.F.__tcfapi === "function") {
            var e = a.F.__tcfapi;
            e(b, 2, c, d)
        } else if (rj(a)) {
            wj(a);
            var f = ++a.He;
            a.R[f] = c;
            if (a.m) {
                var k = {};
                a.m.postMessage((k.__tcfapiCall = {
                    command: b,
                    version: 2,
                    callId: f,
                    parameter: d
                },
                k), "*")
            }
        } else
            c({}, !1)
    }
      , rj = function(a) {
        if (a.m)
            return a.m;
        var b;
        a: {
            for (var c = a.F, d = 0; d < 50; ++d) {
                var e;
                try {
                    e = !(!c.frames || !c.frames.__tcfapiLocator)
                } catch (l) {
                    e = !1
                }
                if (e) {
                    b = c;
                    break a
                }
                var f;
                b: {
                    try {
                        var k = c.parent;
                        if (k && k != c) {
                            f = k;
                            break b
                        }
                    } catch (l) {}
                    f = null
                }
                if (!(c = f))
                    break
            }
            b = null
        }
        a.m = b;
        return a.m
    }
      , wj = function(a) {
        a.J || (a.J = function(b) {
            try {
                var c;
                c = (typeof b.data === "string" ? JSON.parse(b.data) : b.data).__tcfapiReturn;
                a.R[c.callId](c.returnValue, c.success)
            } catch (d) {}
        }
        ,
        Pi(a.F, "message", a.J))
    }
      , xj = function(a) {
        if (a.gdprApplies === !1)
            return !0;
        a.internalErrorState === void 0 && (a.internalErrorState = pj(a));
        return a.cmpStatus === "error" || a.internalErrorState !== 0 ? a.internalBlockOnErrors ? (nj({
            e: String(a.internalErrorState)
        }),
        !1) : !0 : a.cmpStatus !== "loaded" || a.eventStatus !== "tcloaded" && a.eventStatus !== "useractioncomplete" ? !1 : !0
    };
    var yj = {
        1: 0,
        3: 0,
        4: 0,
        7: 3,
        9: 3,
        10: 3
    };
    function zj() {
        var a = He.tcf || {};
        return He.tcf = a
    }
    var Aj = function() {
        return new qj(E,{
            bm: -1
        })
    };
    function Bj() {
        var a = zj()
          , b = Aj();
        sj(b) && !Cj() && !Dj() && L(124);
        if (!a.active && sj(b)) {
            Cj() && (a.active = !0,
            a.Hb = {},
            a.cmpId = 0,
            a.tcfPolicyVersion = 0,
            Ig().active = !0,
            a.tcString = "tcunavailable");
            wh();
            try {
                b.addEventListener(function(c) {
                    if (c.internalErrorState !== 0)
                        Ej(a),
                        xh([M.g.O, M.g.na, M.g.M]),
                        Ig().active = !0;
                    else if (a.gdprApplies = c.gdprApplies,
                    a.cmpId = c.cmpId,
                    a.enableAdvertiserConsentMode = c.enableAdvertiserConsentMode,
                    Dj() && (a.active = !0),
                    !Fj(c) || Cj() || Dj()) {
                        a.tcfPolicyVersion = c.tcfPolicyVersion;
                        var d;
                        if (c.gdprApplies === !1) {
                            var e = {}, f;
                            for (f in yj)
                                yj.hasOwnProperty(f) && (e[f] = !0);
                            d = e;
                            b.removeEventListener(c)
                        } else if (Fj(c)) {
                            var k = {}, l;
                            for (l in yj)
                                if (yj.hasOwnProperty(l))
                                    if (l === "1") {
                                        var m, n = c, p = {
                                            Lk: !0
                                        };
                                        p = p === void 0 ? {} : p;
                                        m = xj(n) ? n.gdprApplies === !1 ? !0 : n.tcString === "tcunavailable" ? !p.Bi : (p.Bi || n.gdprApplies !== void 0 || p.Lk) && (p.Bi || typeof n.tcString === "string" && n.tcString.length) ? vj(n, "1", 0) : !0 : !1;
                                        k["1"] = m
                                    } else
                                        k[l] = vj(c, l, yj[l]);
                            d = k
                        }
                        if (d) {
                            a.tcString = c.tcString || "tcempty";
                            a.Hb = d;
                            var q = {}
                              , r = (q[M.g.O] = a.Hb["1"] ? "granted" : "denied",
                            q);
                            a.gdprApplies !== !0 ? (xh([M.g.O, M.g.na, M.g.M]),
                            Ig().active = !0) : (r[M.g.na] = a.Hb["3"] && a.Hb["4"] ? "granted" : "denied",
                            typeof a.tcfPolicyVersion === "number" && a.tcfPolicyVersion >= 4 ? r[M.g.M] = a.Hb["1"] && a.Hb["7"] ? "granted" : "denied" : xh([M.g.M]),
                            sh(r, {
                                eventId: 0
                            }, {
                                gdprApplies: a ? a.gdprApplies : void 0,
                                tcString: Gj() || ""
                            }))
                        }
                    } else
                        xh([M.g.O, M.g.na, M.g.M])
                })
            } catch (c) {
                Ej(a),
                xh([M.g.O, M.g.na, M.g.M]),
                Ig().active = !0
            }
        }
    }
    function Ej(a) {
        a.type = "e";
        a.tcString = "tcunavailable"
    }
    function Fj(a) {
        return a.eventStatus === "tcloaded" || a.eventStatus === "useractioncomplete" || a.eventStatus === "cmpuishown"
    }
    function Cj() {
        return E.gtag_enable_tcf_support === !0
    }
    function Dj() {
        return zj().enableAdvertiserConsentMode === !0
    }
    function Gj() {
        var a = zj();
        if (a.active)
            return a.tcString
    }
    function Hj() {
        var a = zj();
        if (a.active && a.gdprApplies !== void 0)
            return a.gdprApplies ? "1" : "0"
    }
    function Ij(a) {
        if (!yj.hasOwnProperty(String(a)))
            return !0;
        var b = zj();
        return b.active && b.Hb ? !!b.Hb[String(a)] : !0
    }
    var Jj = [M.g.O, M.g.P, M.g.M, M.g.na]
      , Kj = {}
      , Lj = (Kj[M.g.O] = 1,
    Kj[M.g.P] = 2,
    Kj);
    function Mj(a) {
        if (a === void 0)
            return 0;
        switch (S(a, M.g.ia)) {
        case void 0:
            return 1;
        case !1:
            return 3;
        default:
            return 2
        }
    }
    function Nj(a) {
        if (ih() === "US-CO" && Ob.globalPrivacyControl === !0)
            return !1;
        var b = Mj(a);
        if (b === 3)
            return !1;
        switch (Ug(M.g.na)) {
        case 1:
        case 3:
            return !0;
        case 2:
            return !1;
        case 4:
            return b === 2;
        case 0:
            return !0;
        default:
            return !1
        }
    }
    function Oj() {
        return Xg() || !Tg(M.g.O) || !Tg(M.g.P)
    }
    function Pj() {
        var a = {}, b;
        for (b in Lj)
            Lj.hasOwnProperty(b) && (a[Lj[b]] = Ug(b));
        return "G1" + pc(a[1] || 0) + pc(a[2] || 0)
    }
    var Qj = {}
      , Rj = (Qj[M.g.O] = 0,
    Qj[M.g.P] = 1,
    Qj[M.g.M] = 2,
    Qj[M.g.na] = 3,
    Qj);
    function Sj(a) {
        switch (a) {
        case void 0:
            return 1;
        case !0:
            return 3;
        case !1:
            return 2;
        default:
            return 0
        }
    }
    function Tj(a) {
        for (var b = "1", c = 0; c < Jj.length; c++) {
            var d = b, e, f = Jj[c], k = Sg.delegatedConsentTypes[f];
            e = k === void 0 ? 0 : Rj.hasOwnProperty(k) ? 12 | Rj[k] : 8;
            var l = Ig();
            l.accessedAny = !0;
            var m = l.entries[f] || {};
            e = e << 2 | Sj(m.implicit);
            b = d + ("" + "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[e] + "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[Sj(m.declare) << 4 | Sj(m.default) << 2 | Sj(m.update)])
        }
        var n = b
          , p = (ih() === "US-CO" && Ob.globalPrivacyControl === !0 ? 1 : 0) << 3
          , q = (Xg() ? 1 : 0) << 2
          , r = Mj(a);
        b = n + "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[p | q | r];
        P(90) && (b += "" + "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[Sg.containerScopedDefaults.ad_storage << 4 | Sg.containerScopedDefaults.analytics_storage << 2 | Sg.containerScopedDefaults.ad_user_data] + "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[(eb(8) && Sg.usedContainerScopedDefaults ? 1 : 0) << 2 | Sg.containerScopedDefaults.ad_personalization]);
        return b
    }
    function Uj() {
        if (!Tg(M.g.M))
            return "-";
        for (var a = Object.keys(Ce), b = Vg(a), c = "", d = la(a), e = d.next(); !e.done; e = d.next()) {
            var f = e.value;
            b[f] && (c += Ce[f])
        }
        (Sg.usedCorePlatformServices ? Sg.selectedAllCorePlatformServices : 1) && (c += "o");
        return c || "-"
    }
    function Vj() {
        return hh["6"] !== !1 || (Cj() || Dj()) && Hj() === "1" ? "1" : "0"
    }
    function Wj() {
        return (hh["6"] !== !1 ? !0 : !(!Cj() && !Dj()) && Hj() === "1") || !Tg(M.g.M)
    }
    function Xj() {
        var a = "0", b = "0", c;
        var d = zj();
        c = d.active ? d.cmpId : void 0;
        typeof c === "number" && c >= 0 && c <= 4095 && (a = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[c >> 6 & 63],
        b = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[c & 63]);
        var e = "0", f;
        var k = zj();
        f = k.active ? k.tcfPolicyVersion : void 0;
        typeof f === "number" && f >= 0 && f <= 63 && (e = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[f]);
        var l = 0;
        hh["6"] !== !1 && (l |= 1);
        Hj() === "1" && (l |= 2);
        Cj() && (l |= 4);
        var m;
        var n = zj();
        m = n.enableAdvertiserConsentMode !== void 0 ? n.enableAdvertiserConsentMode ? "1" : "0" : void 0;
        m === "1" && (l |= 8);
        Ig().waitPeriodTimedOut && (l |= 16);
        return "1" + a + b + e + "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-_"[l]
    }
    function Yj() {
        return ih() === "US-CO"
    }
    ;function Zj() {
        var a = !1;
        return a
    }
    ;var ak = {
        UA: 1,
        AW: 2,
        DC: 3,
        G: 4,
        GF: 5,
        GT: 12,
        GTM: 14,
        HA: 6,
        MC: 7
    };
    function bk(a) {
        a = a === void 0 ? {} : a;
        var b = Zf.ctid.split("-")[0].toUpperCase()
          , c = {};
        c.ctid = Zf.ctid;
        c.Nl = Ge.sd;
        c.Rl = Ge.Ff;
        c.ql = Xf.qd ? 2 : 1;
        c.Wl = a.Qi;
        c.ui = Zf.canonicalContainerId;
        c.ui !== a.wa && (c.wa = a.wa);
        var d = hg();
        c.Al = d ? d.canonicalContainerId : void 0;
        Me ? (c.Ye = ak[b],
        c.Ye || (c.Ye = 0)) : c.Ye = Re ? 13 : 10;
        $e.F ? (c.Xe = 0,
        c.pk = 2) : Oe ? c.Xe = 1 : Zj() ? c.Xe = 2 : c.Xe = 3;
        var e = {};
        e[6] = Yf;
        $e.D === 2 ? e[7] = !0 : $e.D === 1 && (e[2] = !0);
        c.vk = e;
        var f = a.Jf, k;
        var l = c.Ye
          , m = c.Xe;
        l === void 0 ? k = "" : (m || (m = 0),
        k = "" + sc(1, 1) + oc(l << 2 | m));
        var n = c.pk, p = "4" + k + (n ? "" + sc(2, 1) + oc(n) : ""), q, r = c.Rl;
        q = r && rc.test(r) ? "" + sc(3, 2) + r : "";
        var t, u = c.Nl;
        t = u ? "" + sc(4, 1) + oc(u) : "";
        var v;
        var w = c.ctid;
        if (w && f) {
            var x = w.split("-")
              , y = x[0].toUpperCase();
            if (y !== "GTM" && y !== "OPT")
                v = "";
            else {
                var z = x[1];
                v = "" + sc(5, 3) + oc(1 + z.length) + (c.ql || 0) + z
            }
        } else
            v = "";
        var A = c.Wl, C = c.ui, G = c.wa, D = c.Zm, F = p + q + t + v + (A ? "" + sc(6, 1) + oc(A) : "") + (C ? "" + sc(7, 3) + oc(C.length) + C : "") + (G ? "" + sc(8, 3) + oc(G.length) + G : "") + (D ? "" + sc(9, 3) + oc(D.length) + D : ""), K;
        var I = c.vk;
        I = I === void 0 ? {} : I;
        for (var R = [], Q = la(Object.keys(I)), V = Q.next(); !V.done; V = Q.next()) {
            var X = V.value;
            R[Number(X)] = I[X]
        }
        if (R.length) {
            var O = sc(10, 3), ea;
            if (R.length === 0)
                ea = oc(0);
            else {
                for (var da = [], aa = 0, qa = !1, Da = 0; Da < R.length; Da++) {
                    qa = !0;
                    var ta = Da % 6;
                    R[Da] && (aa |= 1 << ta);
                    ta === 5 && (da.push(oc(aa)),
                    aa = 0,
                    qa = !1)
                }
                qa && da.push(oc(aa));
                ea = da.join("")
            }
            var Ba = ea;
            K = "" + O + oc(Ba.length) + Ba
        } else
            K = "";
        var Ja = c.Al;
        return F + K + (Ja ? "" + sc(11, 3) + oc(Ja.length) + Ja : "")
    }
    ;var ck = {
        gi: "service_worker_endpoint",
        ii: "shared_user_id",
        ek: "shared_user_id_requested",
        Ne: "shared_user_id_source"
    }, dk;
    function ek(a) {
        if (!dk) {
            dk = {};
            for (var b = la(Object.keys(ck)), c = b.next(); !c.done; c = b.next())
                dk[ck[c.value]] = !0
        }
        return !!dk[a]
    }
    function fk(a, b) {
        b = b === void 0 ? !1 : b;
        if (ek(a)) {
            var c, d, e = (d = (c = Sb("google_tag_data", {})).xcd) != null ? d : c.xcd = {};
            if (e[a])
                return e[a];
            if (b) {
                var f = void 0
                  , k = 1
                  , l = {}
                  , m = {
                    set: function(n) {
                        f = n;
                        m.notify()
                    },
                    get: function() {
                        return f
                    },
                    subscribe: function(n) {
                        l[String(k)] = n;
                        return k++
                    },
                    unsubscribe: function(n) {
                        var p = String(n);
                        return l.hasOwnProperty(p) ? (delete l[p],
                        !0) : !1
                    },
                    notify: function() {
                        for (var n = la(Object.keys(l)), p = n.next(); !p.done; p = n.next()) {
                            var q = p.value;
                            try {
                                l[q](a, f)
                            } catch (r) {}
                        }
                    }
                };
                return e[a] = m
            }
        }
    }
    function gk() {
        var a = fk(ck.ek, !0);
        a && a.set(!0)
    }
    function hk(a) {
        var b;
        return (b = fk(a)) == null ? void 0 : b.get()
    }
    function ik(a) {
        var b = ck.Ne;
        if (typeof a === "function") {
            var c;
            return (c = fk(b, !0)) == null ? void 0 : c.subscribe(a)
        }
    }
    function jk(a) {
        var b = fk(ck.Ne);
        b && b.unsubscribe(a)
    }
    ;function kk(a) {
        return a.origin !== "null"
    }
    ;function lk(a, b, c, d) {
        var e;
        if (mk(d)) {
            for (var f = [], k = String(b || nk()).split(";"), l = 0; l < k.length; l++) {
                var m = k[l].split("=")
                  , n = m[0].replace(/^\s*|\s*$/g, "");
                if (n && n === a) {
                    var p = m.slice(1).join("=").replace(/^\s*|\s*$/g, "");
                    p && c && (p = decodeURIComponent(p));
                    f.push(p)
                }
            }
            e = f
        } else
            e = [];
        return e
    }
    function ok(a, b, c, d, e) {
        if (mk(e)) {
            var f = pk(a, d, e);
            if (f.length === 1)
                return f[0].id;
            if (f.length !== 0) {
                f = qk(f, function(k) {
                    return k.Ek
                }, b);
                if (f.length === 1)
                    return f[0].id;
                f = qk(f, function(k) {
                    return k.Cl
                }, c);
                return f[0] ? f[0].id : void 0
            }
        }
    }
    function rk(a, b, c, d) {
        var e = nk()
          , f = window;
        kk(f) && (f.document.cookie = a);
        var k = nk();
        return e !== k || c !== void 0 && lk(b, k, !1, d).indexOf(c) >= 0
    }
    function sk(a, b, c) {
        function d(t, u, v) {
            if (v == null)
                return delete k[u],
                t;
            k[u] = v;
            return t + "; " + u + "=" + v
        }
        function e(t, u) {
            if (u == null)
                return t;
            k[u] = !0;
            return t + "; " + u
        }
        if (!mk(c.ab))
            return 2;
        var f;
        b == null ? f = a + "=deleted; expires=" + (new Date(0)).toUTCString() : (c.encode && (b = encodeURIComponent(b)),
        b = tk(b),
        f = a + "=" + b);
        var k = {};
        f = d(f, "path", c.path);
        var l;
        c.expires instanceof Date ? l = c.expires.toUTCString() : c.expires != null && (l = "" + c.expires);
        f = d(f, "expires", l);
        f = d(f, "max-age", c.Sm);
        f = d(f, "samesite", c.Xm);
        c.Ym && (f = e(f, "secure"));
        var m = c.domain;
        if (m && m.toLowerCase() === "auto") {
            for (var n = uk(), p = 0; p < n.length; ++p) {
                var q = n[p] !== "none" ? n[p] : void 0
                  , r = d(f, "domain", q);
                r = e(r, c.flags);
                if (!vk(q, c.path) && rk(r, a, b, c.ab))
                    return 0
            }
            return 1
        }
        m && m.toLowerCase() !== "none" && (f = d(f, "domain", m));
        f = e(f, c.flags);
        return vk(m, c.path) ? 1 : rk(f, a, b, c.ab) ? 0 : 1
    }
    function wk(a, b, c) {
        c.path == null && (c.path = "/");
        c.domain || (c.domain = "auto");
        return sk(a, b, c)
    }
    function qk(a, b, c) {
        for (var d = [], e = [], f, k = 0; k < a.length; k++) {
            var l = a[k]
              , m = b(l);
            m === c ? d.push(l) : f === void 0 || m < f ? (e = [l],
            f = m) : m === f && e.push(l)
        }
        return d.length > 0 ? d : e
    }
    function pk(a, b, c) {
        for (var d = [], e = lk(a, void 0, void 0, c), f = 0; f < e.length; f++) {
            var k = e[f].split(".")
              , l = k.shift();
            if (!b || !l || b.indexOf(l) !== -1) {
                var m = k.shift();
                if (m) {
                    var n = m.split("-");
                    d.push({
                        id: k.join("."),
                        Ek: Number(n[0]) || 1,
                        Cl: Number(n[1]) || 1
                    })
                }
            }
        }
        return d
    }
    function tk(a) {
        a && a.length > 1200 && (a = a.substring(0, 1200));
        return a
    }
    var xk = /^(www\.)?google(\.com?)?(\.[a-z]{2})?$/
      , yk = /(^|\.)doubleclick\.net$/i;
    function vk(a, b) {
        return a !== void 0 && (yk.test(window.document.location.hostname) || b === "/" && xk.test(a))
    }
    function zk(a) {
        if (!a)
            return 1;
        var b = a;
        eb(11) && a === "none" && (b = window.document.location.hostname);
        b = b.indexOf(".") === 0 ? b.substring(1) : b;
        return b.split(".").length
    }
    function Ak(a) {
        if (!a || a === "/")
            return 1;
        a[0] !== "/" && (a = "/" + a);
        a[a.length - 1] !== "/" && (a += "/");
        return a.split("/").length - 1
    }
    function Bk(a, b) {
        var c = "" + zk(a)
          , d = Ak(b);
        d > 1 && (c += "-" + d);
        return c
    }
    var nk = function() {
        return kk(window) ? window.document.cookie : ""
    }
      , mk = function(a) {
        return a && Og().m() ? (Array.isArray(a) ? a : [a]).every(function(b) {
            return Wg(b) && Tg(b)
        }) : !0
    }
      , uk = function() {
        var a = []
          , b = window.document.location.hostname.split(".");
        if (b.length === 4) {
            var c = b[b.length - 1];
            if (Number(c).toString() === c)
                return ["none"]
        }
        for (var d = b.length - 2; d >= 0; d--)
            a.push(b.slice(d).join("."));
        var e = window.document.location.hostname;
        yk.test(e) || xk.test(e) || a.push("none");
        return a
    };
    function Ck(a) {
        var b = Math.round(Math.random() * 2147483647), c;
        if (a) {
            var d = 1, e, f, k;
            if (a)
                for (d = 0,
                f = a.length - 1; f >= 0; f--)
                    k = a.charCodeAt(f),
                    d = (d << 6 & 268435455) + k + (k << 14),
                    e = d & 266338304,
                    d = e !== 0 ? d ^ e >> 21 : d;
            c = String(b ^ d & 2147483647)
        } else
            c = String(b);
        return c
    }
    function Dk(a) {
        return [Ck(a), Math.round(tb() / 1E3)].join(".")
    }
    ;function Ek(a, b, c, d) {
        var e, f = Number(a.Za != null ? a.Za : void 0);
        f !== 0 && (e = new Date((b || tb()) + 1E3 * (f || 7776E3)));
        return {
            path: a.path,
            domain: a.domain,
            flags: a.flags,
            encode: !!c,
            expires: e,
            ab: d
        }
    }
    ;var Fk;
    function Gk() {
        function a(k) {
            c(k.target || k.srcElement || {})
        }
        function b(k) {
            d(k.target || k.srcElement || {})
        }
        var c = Hk
          , d = Ik
          , e = Jk();
        if (!e.init) {
            ac(H, "mousedown", a);
            ac(H, "keyup", a);
            ac(H, "submit", b);
            var f = HTMLFormElement.prototype.submit;
            HTMLFormElement.prototype.submit = function() {
                d(this);
                f.call(this)
            }
            ;
            e.init = !0
        }
    }
    function Kk(a, b, c, d, e) {
        var f = {
            callback: a,
            domains: b,
            fragment: c === 2,
            placement: c,
            forms: d,
            sameHost: e
        };
        Jk().decorators.push(f)
    }
    function Lk(a, b, c) {
        for (var d = Jk().decorators, e = {}, f = 0; f < d.length; ++f) {
            var k = d[f], l;
            if (l = !c || k.forms)
                a: {
                    var m = k.domains
                      , n = a
                      , p = !!k.sameHost;
                    if (m && (p || n !== H.location.hostname))
                        for (var q = 0; q < m.length; q++)
                            if (m[q]instanceof RegExp) {
                                if (m[q].test(n)) {
                                    l = !0;
                                    break a
                                }
                            } else if (n.indexOf(m[q]) >= 0 || p && m[q].indexOf(n) >= 0) {
                                l = !0;
                                break a
                            }
                    l = !1
                }
            if (l) {
                var r = k.placement;
                r === void 0 && (r = k.fragment ? 2 : 1);
                r === b && wb(e, k.callback())
            }
        }
        return e
    }
    function Jk() {
        var a = Sb("google_tag_data", {})
          , b = a.gl;
        b && b.decorators || (b = {
            decorators: []
        },
        a.gl = b);
        return b
    }
    ;var Mk = /(.*?)\*(.*?)\*(.*)/
      , Nk = /^https?:\/\/([^\/]*?)\.?cdn\.ampproject\.org\/?(.*)/
      , Ok = /^(?:www\.|m\.|amp\.)+/
      , Pk = /([^?#]+)(\?[^#]*)?(#.*)?/;
    function Qk(a) {
        var b = Pk.exec(a);
        if (b)
            return {
                kg: b[1],
                query: b[2],
                fragment: b[3]
            }
    }
    function Rk(a, b) {
        var c = [Ob.userAgent, (new Date).getTimezoneOffset(), Ob.userLanguage || Ob.language, Math.floor(tb() / 60 / 1E3) - (b === void 0 ? 0 : b), a].join("*"), d;
        if (!(d = Fk)) {
            for (var e = Array(256), f = 0; f < 256; f++) {
                for (var k = f, l = 0; l < 8; l++)
                    k = k & 1 ? k >>> 1 ^ 3988292384 : k >>> 1;
                e[f] = k
            }
            d = e
        }
        Fk = d;
        for (var m = 4294967295, n = 0; n < c.length; n++)
            m = m >>> 8 ^ Fk[(m ^ c.charCodeAt(n)) & 255];
        return ((m ^ -1) >>> 0).toString(36)
    }
    function Sk() {
        return function(a) {
            var b = zf(E.location.href)
              , c = b.search.replace("?", "")
              , d = sf(c, "_gl", !0) || "";
            a.query = Tk(d) || {};
            var e = tf(b, "fragment"), f;
            var k = -1;
            if (yb(e, "_gl="))
                k = 4;
            else {
                var l = e.indexOf("&_gl=");
                l > 0 && (k = l + 3 + 2)
            }
            if (k < 0)
                f = void 0;
            else {
                var m = e.indexOf("&", k);
                f = m < 0 ? e.substring(k) : e.substring(k, m)
            }
            a.fragment = Tk(f || "") || {}
        }
    }
    function Uk(a) {
        var b = Sk()
          , c = Jk();
        c.data || (c.data = {
            query: {},
            fragment: {}
        },
        b(c.data));
        var d = {}
          , e = c.data;
        e && (wb(d, e.query),
        a && wb(d, e.fragment));
        return d
    }
    var Tk = function(a) {
        try {
            var b = Vk(a, 3);
            if (b !== void 0) {
                for (var c = {}, d = b ? b.split("*") : [], e = 0; e + 1 < d.length; e += 2) {
                    var f = d[e]
                      , k = Ya(d[e + 1]);
                    c[f] = k
                }
                $a("TAGGING", 6);
                return c
            }
        } catch (l) {
            $a("TAGGING", 8)
        }
    };
    function Vk(a, b) {
        if (a) {
            var c;
            a: {
                for (var d = a, e = 0; e < 3; ++e) {
                    var f = Mk.exec(d);
                    if (f) {
                        c = f;
                        break a
                    }
                    d = decodeURIComponent(d)
                }
                c = void 0
            }
            var k = c;
            if (k && k[1] === "1") {
                var l = k[3], m;
                a: {
                    for (var n = k[2], p = 0; p < b; ++p)
                        if (n === Rk(l, p)) {
                            m = !0;
                            break a
                        }
                    m = !1
                }
                if (m)
                    return l;
                $a("TAGGING", 7)
            }
        }
    }
    function Wk(a, b, c, d, e) {
        function f(p) {
            var q = p
              , r = (new RegExp("(.*?)(^|&)" + a + "=([^&]*)&?(.*)")).exec(q)
              , t = q;
            if (r) {
                var u = r[2]
                  , v = r[4];
                t = r[1];
                v && (t = t + u + v)
            }
            p = t;
            var w = p.charAt(p.length - 1);
            p && w !== "&" && (p += "&");
            return p + n
        }
        d = d === void 0 ? !1 : d;
        e = e === void 0 ? !1 : e;
        var k = Qk(c);
        if (!k)
            return "";
        var l = k.query || ""
          , m = k.fragment || ""
          , n = a + "=" + b;
        d ? m.substring(1).length !== 0 && e || (m = "#" + f(m.substring(1))) : l = "?" + f(l.substring(1));
        return "" + k.kg + l + m
    }
    function Xk(a, b) {
        function c(n, p, q) {
            var r;
            a: {
                for (var t in n)
                    if (n.hasOwnProperty(t)) {
                        r = !0;
                        break a
                    }
                r = !1
            }
            if (r) {
                var u, v = [], w;
                for (w in n)
                    if (n.hasOwnProperty(w)) {
                        var x = n[w];
                        x !== void 0 && x === x && x !== null && x.toString() !== "[object Object]" && (v.push(w),
                        v.push(Xa(String(x))))
                    }
                var y = v.join("*");
                u = ["1", Rk(y), y].join("*");
                d ? (eb(4) || eb(1) || !p) && Yk("_gl", u, a, p, q) : Zk("_gl", u, a, p, q)
            }
        }
        var d = (a.tagName || "").toUpperCase() === "FORM"
          , e = Lk(b, 1, d)
          , f = Lk(b, 2, d)
          , k = Lk(b, 4, d)
          , l = Lk(b, 3, d);
        c(e, !1, !1);
        c(f, !0, !1);
        eb(1) && c(k, !0, !0);
        for (var m in l)
            l.hasOwnProperty(m) && $k(m, l[m], a)
    }
    function $k(a, b, c) {
        c.tagName.toLowerCase() === "a" ? Zk(a, b, c) : c.tagName.toLowerCase() === "form" && Yk(a, b, c)
    }
    function Zk(a, b, c, d, e) {
        d = d === void 0 ? !1 : d;
        e = e === void 0 ? !1 : e;
        var f;
        if (f = c.href) {
            var k;
            if (!(k = !eb(5) || d)) {
                var l = E.location.href
                  , m = Qk(c.href)
                  , n = Qk(l);
                k = !(m && n && m.kg === n.kg && m.query === n.query && m.fragment)
            }
            f = k
        }
        if (f) {
            var p = Wk(a, b, c.href, d, e);
            Jb.test(p) && (c.href = p)
        }
    }
    function Yk(a, b, c, d, e) {
        d = d === void 0 ? !1 : d;
        e = e === void 0 ? !1 : e;
        if (c && c.action) {
            var f = (c.method || "").toLowerCase();
            if (f !== "get" || d) {
                if (f === "get" || f === "post") {
                    var k = Wk(a, b, c.action, d, e);
                    Jb.test(k) && (c.action = k)
                }
            } else {
                for (var l = c.childNodes || [], m = !1, n = 0; n < l.length; n++) {
                    var p = l[n];
                    if (p.name === a) {
                        p.setAttribute("value", b);
                        m = !0;
                        break
                    }
                }
                if (!m) {
                    var q = H.createElement("input");
                    q.setAttribute("type", "hidden");
                    q.setAttribute("name", a);
                    q.setAttribute("value", b);
                    c.appendChild(q)
                }
            }
        }
    }
    function Hk(a) {
        try {
            var b;
            a: {
                for (var c = a, d = 100; c && d > 0; ) {
                    if (c.href && c.nodeName.match(/^a(?:rea)?$/i)) {
                        b = c;
                        break a
                    }
                    c = c.parentNode;
                    d--
                }
                b = null
            }
            var e = b;
            if (e) {
                var f = e.protocol;
                f !== "http:" && f !== "https:" || Xk(e, e.hostname)
            }
        } catch (k) {}
    }
    function Ik(a) {
        try {
            if (a.action) {
                var b = tf(zf(a.action), "host");
                Xk(a, b)
            }
        } catch (c) {}
    }
    function al(a, b, c, d) {
        Gk();
        var e = c === "fragment" ? 2 : 1;
        d = !!d;
        Kk(a, b, e, d, !1);
        e === 2 && $a("TAGGING", 23);
        d && $a("TAGGING", 24)
    }
    function bl(a, b) {
        Gk();
        Kk(a, [vf(E.location, "host", !0)], b, !0, !0)
    }
    function cl() {
        var a = H.location.hostname
          , b = Nk.exec(H.referrer);
        if (!b)
            return !1;
        var c = b[2]
          , d = b[1]
          , e = "";
        if (c) {
            var f = c.split("/")
              , k = f[1];
            e = k === "s" ? decodeURIComponent(f[2]) : decodeURIComponent(k)
        } else if (d) {
            if (d.indexOf("xn--") === 0)
                return !1;
            e = d.replace(/-/g, ".").replace(/\.\./g, "-")
        }
        var l = a.replace(Ok, "")
          , m = e.replace(Ok, "");
        return l === m || zb(l, "." + m)
    }
    function dl(a, b) {
        return a === !1 ? !1 : a || b || cl()
    }
    ;var el = ["1"]
      , fl = {}
      , gl = {};
    function hl(a, b) {
        b = b === void 0 ? !0 : b;
        var c = il(a.prefix);
        if (!fl[c])
            if (jl(c, a.path, a.domain)) {
                var d = gl[il(a.prefix)];
                kl(a, d ? d.id : void 0, d ? d.gg : void 0)
            } else {
                var e = Bf("auiddc");
                e ? ($a("TAGGING", 17),
                fl[c] = e) : b && (ll(il(a.prefix), Dk(), a),
                jl(c, a.path, a.domain))
            }
    }
    function kl(a, b, c) {
        var d = il(a.prefix)
          , e = fl[d];
        if (e) {
            var f = e.split(".");
            if (f.length === 2) {
                var k = Number(f[1]) || 0;
                if (k) {
                    var l = e;
                    b && (l = e + "." + b + "." + (c ? c : Math.floor(tb() / 1E3)));
                    ll(d, l, a, k * 1E3)
                }
            }
        }
    }
    function ll(a, b, c, d) {
        var e = ["1", Bk(c.domain, c.path), b].join(".")
          , f = Ek(c, d);
        f.ab = ml();
        wk(a, e, f)
    }
    function jl(a, b, c) {
        var d = ok(a, zk(b), Ak(c), el, ml());
        if (!d)
            return !1;
        nl(a, d);
        return !0
    }
    function nl(a, b) {
        var c = b.split(".");
        c.length === 5 ? (fl[a] = c.slice(0, 2).join("."),
        gl[a] = {
            id: c.slice(2, 4).join("."),
            gg: Number(c[4]) || 0
        }) : c.length === 3 ? gl[a] = {
            id: c.slice(0, 2).join("."),
            gg: Number(c[2]) || 0
        } : fl[a] = b
    }
    function il(a) {
        return (a || "_gcl") + "_au"
    }
    function ol(a) {
        function b() {
            Tg(c) && a()
        }
        var c = ml();
        $g(function() {
            b();
            Tg(c) || ah(b, c)
        }, c)
    }
    function pl(a) {
        var b = Uk(!0)
          , c = il(a.prefix);
        ol(function() {
            var d = b[c];
            if (d) {
                nl(c, d);
                var e = Number(fl[c].split(".")[1]) * 1E3;
                if (e) {
                    $a("TAGGING", 16);
                    var f = Ek(a, e);
                    f.ab = ml();
                    wk(c, ["1", Bk(a.domain, a.path), d].join("."), f)
                }
            }
        })
    }
    function ql(a, b, c, d, e) {
        e = e || {};
        var f = function() {
            var k = {}
              , l = ok(a, zk(e.path), Ak(e.domain), el, ml());
            l && (k[a] = l);
            return k
        };
        ol(function() {
            al(f, b, c, d)
        })
    }
    function ml() {
        return ["ad_storage", "ad_user_data"]
    }
    ;function rl(a) {
        for (var b = [], c = H.cookie.split(";"), d = new RegExp("^\\s*" + (a || "_gac") + "_(UA-\\d+-\\d+)=\\s*(.+?)\\s*$"), e = 0; e < c.length; e++) {
            var f = c[e].match(d);
            f && b.push({
                ug: f[1],
                value: f[2],
                timestamp: Number(f[2].split(".")[1]) || 0
            })
        }
        b.sort(function(k, l) {
            return l.timestamp - k.timestamp
        });
        return b
    }
    function sl(a, b) {
        var c = rl(a)
          , d = {};
        if (!c || !c.length)
            return d;
        for (var e = 0; e < c.length; e++) {
            var f = c[e].value.split(".");
            if (!(f[0] !== "1" || b && f.length < 3 || !b && f.length !== 3) && Number(f[1])) {
                d[c[e].ug] || (d[c[e].ug] = []);
                var k = {
                    version: f[0],
                    timestamp: Number(f[1]) * 1E3,
                    W: f[2]
                };
                b && f.length > 3 && (k.labels = f.slice(3));
                d[c[e].ug].push(k)
            }
        }
        return d
    }
    ;var tl = {}
      , ul = (tl.k = {
        Fa: /^[\w-]+$/
    },
    tl.b = {
        Fa: /^[\w-]+$/,
        og: !0
    },
    tl.i = {
        Fa: /^[1-9]\d*$/
    },
    tl);
    var vl = {}
      , yl = (vl[5] = {
        Xi: {
            2: wl
        },
        Lf: ["k", "i", "b"]
    },
    vl[4] = {
        Xi: {
            2: wl,
            GCL: xl
        },
        Lf: ["k", "i", "b"]
    },
    vl);
    function zl(a) {
        var b = yl[5];
        if (b) {
            var c = a.split(".")[0];
            if (c) {
                var d = b.Xi[c];
                if (d)
                    return d(a, 5)
            }
        }
    }
    function wl(a, b) {
        var c = a.split(".");
        if (c.length === 3) {
            var d = {}
              , e = yl[b];
            if (e) {
                for (var f = e.Lf, k = la(c[2].split("$")), l = k.next(); !l.done; l = k.next()) {
                    var m = l.value
                      , n = m[0];
                    if (f.indexOf(n) !== -1)
                        try {
                            var p = decodeURIComponent(m.substring(1))
                              , q = ul[n];
                            q && (q.og ? (d[n] = d[n] || [],
                            d[n].push(p)) : d[n] = p)
                        } catch (r) {}
                }
                return d
            }
        }
    }
    function Al(a, b) {
        var c = yl[5];
        if (c) {
            for (var d = [], e = la(c.Lf), f = e.next(); !f.done; f = e.next()) {
                var k = f.value
                  , l = ul[k];
                if (l) {
                    var m = a[k];
                    if (m !== void 0)
                        if (l.og && Array.isArray(m))
                            for (var n = la(m), p = n.next(); !p.done; p = n.next())
                                d.push(encodeURIComponent("" + k + p.value));
                        else
                            d.push(encodeURIComponent("" + k + m))
                }
            }
            return ["2", b || "1", d.join("$")].join(".")
        }
    }
    function xl(a) {
        var b = a.split(".");
        b.shift();
        var c = b.shift()
          , d = b.shift()
          , e = {};
        return e.k = d,
        e.i = c,
        e.b = b,
        e
    }
    ;var Bl = new Map([[5, "ad_storage"], [4, ["ad_storage", "ad_user_data"]]]);
    function Cl(a) {
        if (yl[5]) {
            for (var b = [], c = lk(a, void 0, void 0, Bl.get(5)), d = la(c), e = d.next(); !e.done; e = d.next()) {
                var f = zl(e.value);
                f && (Dl(f),
                b.push(f))
            }
            return b
        }
    }
    function El(a, b, c, d) {
        c = c || {};
        var e = Al(b, Bk(c.domain, c.path));
        if (e) {
            var f = Ek(c, d, void 0, Bl.get(5));
            wk(a, e, f)
        }
    }
    function Fl(a, b) {
        var c = b.Fa;
        return typeof c === "function" ? c(a) : c.test(a)
    }
    function Dl(a) {
        for (var b = la(Object.keys(a)), c = b.next(), d = {}; !c.done; d = {
            yd: void 0
        },
        c = b.next()) {
            var e = c.value
              , f = a[e];
            d.yd = ul[e];
            d.yd ? d.yd.og ? a[e] = Array.isArray(f) ? f.filter(function(k) {
                return function(l) {
                    return Fl(l, k.yd)
                }
            }(d)) : void 0 : typeof f === "string" && Fl(f, d.yd) || (a[e] = void 0) : a[e] = void 0
        }
    }
    ;var Gl = /^\w+$/
      , Hl = /^[\w-]+$/
      , Il = {}
      , Jl = (Il.aw = "_aw",
    Il.dc = "_dc",
    Il.gf = "_gf",
    Il.gp = "_gp",
    Il.gs = "_gs",
    Il.ha = "_ha",
    Il.ag = "_ag",
    Il.gb = "_gb",
    Il);
    function Kl() {
        return ["ad_storage", "ad_user_data"]
    }
    function Ll(a) {
        return !Og().m() || Tg(a)
    }
    function Ml(a, b) {
        function c() {
            var d = Ll(b);
            d && a();
            return d
        }
        $g(function() {
            c() || ah(c, b)
        }, b)
    }
    function Nl(a) {
        return Ol(a).map(function(b) {
            return b.W
        })
    }
    function Pl(a) {
        return Ql(a).filter(function(b) {
            return b.W
        }).map(function(b) {
            return b.W
        })
    }
    function Ql(a) {
        var b = Rl(a.prefix)
          , c = Sl("gb", b)
          , d = Sl("ag", b);
        if (!d || !c)
            return [];
        var e = function(l) {
            return function(m) {
                m.type = l;
                return m
            }
        }
          , f = Ol(c).map(e("gb"))
          , k = (eb(7) ? Tl(d) : []).map(e("ag"));
        return f.concat(k).sort(function(l, m) {
            return m.timestamp - l.timestamp
        })
    }
    function Ul(a, b, c, d, e) {
        var f = jb(a, function(k) {
            return k.W === c
        });
        f ? (f.timestamp = Math.max(f.timestamp, d),
        f.labels = Vl(f.labels || [], e || [])) : a.push({
            version: b,
            W: c,
            timestamp: d,
            labels: e
        })
    }
    function Tl(a) {
        for (var b = Cl(a) || [], c = [], d = la(b), e = d.next(); !e.done; e = d.next()) {
            var f = e.value
              , k = f
              , l = Wl(f);
            l && Ul(c, "2", k.k, l, k.b || [])
        }
        return c.sort(function(m, n) {
            return n.timestamp - m.timestamp
        })
    }
    function Ol(a) {
        for (var b = [], c = lk(a, H.cookie, void 0, Kl()), d = la(c), e = d.next(); !e.done; e = d.next()) {
            var f = Xl(e.value);
            if (f != null) {
                var k = f;
                Ul(b, k.version, k.W, k.timestamp, k.labels)
            }
        }
        b.sort(function(l, m) {
            return m.timestamp - l.timestamp
        });
        return Yl(b)
    }
    function Vl(a, b) {
        if (!a.length)
            return b;
        if (!b.length)
            return a;
        var c = {};
        return a.concat(b).filter(function(d) {
            return c.hasOwnProperty(d) ? !1 : c[d] = !0
        })
    }
    function Rl(a) {
        return a && typeof a === "string" && a.match(Gl) ? a : "_gcl"
    }
    function Zl(a, b) {
        var c = eb(7)
          , d = zf(a)
          , e = tf(d, "query", !1, void 0, "gclid")
          , f = tf(d, "query", !1, void 0, "gclsrc")
          , k = tf(d, "query", !1, void 0, "wbraid");
        k = Eb(k);
        var l;
        c && (l = tf(d, "query", !1, void 0, "gbraid"));
        var m = tf(d, "query", !1, void 0, "gad_source")
          , n = tf(d, "query", !1, void 0, "dclid");
        if (b && (!e || !f || !k || c && !l)) {
            var p = d.hash.replace("#", "");
            e = e || sf(p, "gclid");
            f = f || sf(p, "gclsrc");
            k = k || sf(p, "wbraid");
            c && (l = l || sf(p, "gbraid"));
            m = m || sf(p, "gad_source")
        }
        return $l(e, f, n, k, l, m)
    }
    function am() {
        return Zl(E.location.href, !0)
    }
    function $l(a, b, c, d, e, f) {
        var k = {}
          , l = function(m, n) {
            k[n] || (k[n] = []);
            k[n].push(m)
        };
        k.gclid = a;
        k.gclsrc = b;
        k.dclid = c;
        if (a !== void 0 && a.match(Hl))
            switch (b) {
            case void 0:
                l(a, "aw");
                break;
            case "aw.ds":
                l(a, "aw");
                l(a, "dc");
                break;
            case "ds":
                l(a, "dc");
                break;
            case "3p.ds":
                l(a, "dc");
                break;
            case "gf":
                l(a, "gf");
                break;
            case "ha":
                l(a, "ha")
            }
        c && l(c, "dc");
        d !== void 0 && Hl.test(d) && (k.wbraid = d,
        l(d, "gb"));
        eb(7) && e !== void 0 && Hl.test(e) && (k.gbraid = e,
        l(e, "ag"));
        f !== void 0 && Hl.test(f) && (k.gad_source = f,
        l(f, "gs"));
        return k
    }
    function bm(a) {
        var b = am();
        if (eb(6)) {
            for (var c = !0, d = la(Object.keys(b)), e = d.next(); !e.done; e = d.next())
                if (b[e.value] !== void 0) {
                    c = !1;
                    break
                }
            c && (b = Zl(E.document.referrer, !1))
        }
        cm(b, !1, a)
    }
    function cm(a, b, c, d, e) {
        c = c || {};
        e = e || [];
        var f = Rl(c.prefix)
          , k = d || tb()
          , l = Math.round(k / 1E3)
          , m = Kl()
          , n = !1
          , p = !1
          , q = function() {
            if (Ll(m)) {
                var r = Ek(c, k, !0);
                r.ab = m;
                for (var t = function(F, K) {
                    var I = Sl(F, f);
                    I && (wk(I, K, r),
                    F !== "gb" && (n = !0))
                }, u = function(F) {
                    var K = ["GCL", l, F];
                    e.length > 0 && K.push(e.join("."));
                    return K.join(".")
                }, v = la(["aw", "dc", "gf", "ha", "gp"]), w = v.next(); !w.done; w = v.next()) {
                    var x = w.value;
                    a[x] && t(x, u(a[x][0]))
                }
                if (!n && a.gb) {
                    var y = a.gb[0]
                      , z = Sl("gb", f);
                    !b && Ol(z).some(function(F) {
                        return F.W === y && F.labels && F.labels.length > 0
                    }) || t("gb", u(y))
                }
            }
            if (!p && eb(7) && a.gbraid && Ll("ad_storage") && (p = !0,
            !n)) {
                var A = a.gbraid
                  , C = Sl("ag", f);
                if (b || !(eb(7) ? Tl(C) : []).some(function(F) {
                    return F.W === A && F.labels && F.labels.length > 0
                })) {
                    var G = {}
                      , D = (G.k = A,
                    G.i = "" + l,
                    G.b = e,
                    G);
                    El(C, D, c, k)
                }
            }
            dm(a, f, k, c)
        };
        $g(function() {
            q();
            Ll(m) || ah(q, m)
        }, m)
    }
    function dm(a, b, c, d) {
        if (a.gad_source !== void 0 && Ll("ad_storage")) {
            var e = Sl("gs", b);
            if (e) {
                var f = Math.round((tb() - (lc() || 0)) / 1E3)
                  , k = {}
                  , l = (k.k = a.gad_source,
                k.i = "" + f,
                k);
                El(e, l, d, c)
            }
        }
    }
    function em(a, b) {
        var c = Uk(!0);
        Ml(function() {
            for (var d = Rl(b.prefix), e = 0; e < a.length; ++e) {
                var f = a[e];
                if (Jl[f] !== void 0) {
                    var k = Sl(f, d)
                      , l = c[k];
                    if (l) {
                        var m = Math.min(fm(l), tb()), n;
                        b: {
                            for (var p = m, q = lk(k, H.cookie, void 0, Kl()), r = 0; r < q.length; ++r)
                                if (fm(q[r]) > p) {
                                    n = !0;
                                    break b
                                }
                            n = !1
                        }
                        if (!n) {
                            var t = Ek(b, m, !0);
                            t.ab = Kl();
                            wk(k, l, t)
                        }
                    }
                }
            }
            cm($l(c.gclid, c.gclsrc), !1, b)
        }, Kl())
    }
    function gm(a) {
        var b = [];
        eb(7) && b.push("ag");
        if (b.length !== 0) {
            var c = Uk(!0)
              , d = Rl(a.prefix);
            Ml(function() {
                for (var e = 0; e < b.length; ++e) {
                    var f = Sl(b[e], d);
                    if (f) {
                        var k = c[f];
                        if (k) {
                            var l = zl(k);
                            if (l) {
                                var m = Wl(l);
                                m || (m = tb());
                                var n;
                                a: {
                                    for (var p = m, q = Cl(f), r = 0; r < q.length; ++r)
                                        if (Wl(q[r]) > p) {
                                            n = !0;
                                            break a
                                        }
                                    n = !1
                                }
                                if (n)
                                    break;
                                l.i = "" + Math.round(m / 1E3);
                                El(f, l, a, m)
                            }
                        }
                    }
                }
            }, ["ad_storage"])
        }
    }
    function Sl(a, b) {
        var c = Jl[a];
        if (c !== void 0)
            return b + c
    }
    function fm(a) {
        return hm(a.split(".")).length !== 0 ? (Number(a.split(".")[1]) || 0) * 1E3 : 0
    }
    function Wl(a) {
        return a ? (Number(a.i) || 0) * 1E3 : 0
    }
    function Xl(a) {
        var b = hm(a.split("."));
        return b.length === 0 ? null : {
            version: b[0],
            W: b[2],
            timestamp: (Number(b[1]) || 0) * 1E3,
            labels: b.slice(3)
        }
    }
    function hm(a) {
        return a.length < 3 || a[0] !== "GCL" && a[0] !== "1" || !/^\d+$/.test(a[1]) || !Hl.test(a[2]) ? [] : a
    }
    function im(a, b, c, d, e) {
        if (Array.isArray(b) && kk(E)) {
            var f = Rl(e)
              , k = function() {
                for (var l = {}, m = 0; m < a.length; ++m) {
                    var n = Sl(a[m], f);
                    if (n) {
                        var p = lk(n, H.cookie, void 0, Kl());
                        p.length && (l[n] = p.sort()[p.length - 1])
                    }
                }
                return l
            };
            Ml(function() {
                al(k, b, c, d)
            }, Kl())
        }
    }
    function jm(a, b, c, d) {
        if (Array.isArray(a) && kk(E)) {
            var e = [];
            eb(7) && e.push("ag");
            if (e.length !== 0) {
                var f = Rl(d)
                  , k = function() {
                    for (var l = {}, m = 0; m < e.length; ++m) {
                        var n = Sl(e[m], f);
                        if (!n)
                            return {};
                        var p = Cl(n);
                        if (p.length) {
                            var q = p.sort(function(r, t) {
                                return Wl(t) - Wl(r)
                            })[0];
                            l[n] = Al(q)
                        }
                    }
                    return l
                };
                Ml(function() {
                    al(k, a, b, c)
                }, ["ad_storage"])
            }
        }
    }
    function Yl(a) {
        return a.filter(function(b) {
            return Hl.test(b.W)
        })
    }
    function km(a, b) {
        if (kk(E)) {
            for (var c = Rl(b.prefix), d = {}, e = 0; e < a.length; e++)
                Jl[a[e]] && (d[a[e]] = Jl[a[e]]);
            Ml(function() {
                B(d, function(f, k) {
                    var l = lk(c + k, H.cookie, void 0, Kl());
                    l.sort(function(t, u) {
                        return fm(u) - fm(t)
                    });
                    if (l.length) {
                        var m = l[0], n = fm(m), p = hm(m.split(".")).length !== 0 ? m.split(".").slice(3) : [], q = {}, r;
                        r = hm(m.split(".")).length !== 0 ? m.split(".")[2] : void 0;
                        q[f] = [r];
                        cm(q, !0, b, n, p)
                    }
                })
            }, Kl())
        }
    }
    function lm(a) {
        var b = []
          , c = [];
        eb(7) && (b.push("ag"),
        c.push("gbraid"));
        b.length !== 0 && Ml(function() {
            for (var d = Rl(a.prefix), e = 0; e < b.length; ++e) {
                var f = Sl(b[e], d);
                if (!f)
                    break;
                var k = Cl(f);
                if (k.length) {
                    var l = k.sort(function(q, r) {
                        return Wl(r) - Wl(q)
                    })[0]
                      , m = Wl(l)
                      , n = l.b
                      , p = {};
                    p[c[e]] = l.k;
                    cm(p, !0, a, m, n)
                }
            }
        }, ["ad_storage"])
    }
    function mm(a, b) {
        for (var c = 0; c < b.length; ++c)
            if (a[b[c]])
                return !0;
        return !1
    }
    function nm(a) {
        function b(e, f, k) {
            k && (e[f] = k)
        }
        if (Xg()) {
            var c = am();
            if (mm(c, a)) {
                var d = {};
                b(d, "gclid", c.gclid);
                b(d, "dclid", c.dclid);
                b(d, "gclsrc", c.gclsrc);
                b(d, "wbraid", c.wbraid);
                eb(7) && b(d, "gbraid", c.gbraid);
                bl(function() {
                    return d
                }, 3);
                bl(function() {
                    var e = {};
                    return e._up = "1",
                    e
                }, 1)
            }
        }
    }
    function om(a) {
        if (!eb(1))
            return null;
        var b = Uk(!0).gad_source;
        if (b != null)
            return E.location.hash = "",
            b;
        if (eb(2)) {
            var c = zf(E.location.href);
            b = tf(c, "query", !1, void 0, "gad_source");
            if (b != null)
                return b;
            var d = am();
            if (mm(d, a))
                return "0"
        }
        return null
    }
    function pm(a) {
        var b = om(a);
        b != null && bl(function() {
            var c = {};
            return c.gad_source = b,
            c
        }, 4)
    }
    function qm(a, b, c) {
        var d = [];
        if (b.length === 0)
            return d;
        for (var e = {}, f = 0; f < b.length; f++) {
            var k = b[f]
              , l = k.type ? k.type : "gcl";
            (k.labels || []).indexOf(c) === -1 ? (a.push(0),
            e[l] || d.push(k)) : a.push(1);
            e[l] = !0
        }
        return d
    }
    function rm(a, b, c, d) {
        var e = [];
        c = c || {};
        if (!Ll(Kl()))
            return e;
        var f = Ol(a)
          , k = qm(e, f, b);
        if (k.length && !d)
            for (var l = la(k), m = l.next(); !m.done; m = l.next()) {
                var n = m.value
                  , p = n.timestamp
                  , q = [n.version, Math.round(p / 1E3), n.W].concat(n.labels || [], [b]).join(".")
                  , r = Ek(c, p, !0);
                r.ab = Kl();
                wk(a, q, r)
            }
        return e
    }
    function sm(a, b) {
        var c = [];
        b = b || {};
        var d = Ql(b)
          , e = qm(c, d, a);
        if (e.length)
            for (var f = la(e), k = f.next(); !k.done; k = f.next()) {
                var l = k.value
                  , m = Rl(b.prefix)
                  , n = Sl(l.type, m);
                if (!n)
                    break;
                var p = l
                  , q = p.version
                  , r = p.W
                  , t = p.labels
                  , u = p.timestamp
                  , v = Math.round(u / 1E3);
                if (l.type === "ag") {
                    var w = {}
                      , x = (w.k = r,
                    w.i = "" + v,
                    w.b = (t || []).concat([a]),
                    w);
                    El(n, x, b, u)
                } else if (l.type === "gb") {
                    var y = [q, v, r].concat(t || [], [a]).join(".")
                      , z = Ek(b, u, !0);
                    z.ab = Kl();
                    wk(n, y, z)
                }
            }
        return c
    }
    function tm(a, b) {
        var c = Rl(b)
          , d = Sl(a, c);
        if (!d)
            return 0;
        var e;
        e = a === "ag" ? eb(7) ? Tl(d) : [] : Ol(d);
        for (var f = 0, k = 0; k < e.length; k++)
            f = Math.max(f, e[k].timestamp);
        return f
    }
    function um(a) {
        for (var b = 0, c = la(Object.keys(a)), d = c.next(); !d.done; d = c.next())
            for (var e = a[d.value], f = 0; f < e.length; f++)
                b = Math.max(b, Number(e[f].timestamp));
        return b
    }
    function vm(a, b) {
        var c = Math.max(tm("aw", a), um(Ll(Kl()) ? sl() : {}))
          , d = Math.max(tm("gb", a), um(Ll(Kl()) ? sl("_gac_gb", !0) : {}));
        eb(7) && b && (d = Math.max(d, tm("ag", a)));
        return d > c
    }
    ;function Km() {
        He.dedupe_gclid || (He.dedupe_gclid = Dk());
        return He.dedupe_gclid
    }
    ;var Lm = /^(www\.)?google(\.com?)?(\.[a-z]{2}t?)?$/
      , Mm = /^www.googleadservices.com$/;
    function Nm(a) {
        a || (a = Om());
        return a.gm ? !1 : a.Vk || a.Wk || a.Yk || a.Xk || a.Wf || a.Cc || a.Kk || a.Nk ? !0 : !1
    }
    function Om() {
        var a = {}
          , b = Uk(!0);
        a.gm = !!b._up;
        var c = am();
        a.Vk = c.aw !== void 0;
        a.Wk = c.dc !== void 0;
        a.Yk = c.wbraid !== void 0;
        a.Xk = c.gbraid !== void 0;
        var d = zf(E.location.href)
          , e = tf(d, "query", !1, void 0, "gad");
        a.Wf = e !== void 0;
        if (!a.Wf) {
            var f = d.hash.replace("#", "")
              , k = sf(f, "gad");
            a.Wf = k !== void 0
        }
        a.Cc = tf(d, "query", !1, void 0, "gad_source");
        if (a.Cc === void 0) {
            var l = d.hash.replace("#", "")
              , m = sf(l, "gad_source");
            a.Cc = m
        }
        var n = H.referrer ? tf(zf(H.referrer), "host") : "";
        a.Nk = Lm.test(n);
        a.Kk = Mm.test(n);
        return a
    }
    ;var Pm = RegExp("^UA-\\d+-\\d+%3A[\\w-]+(?:%2C[\\w-]+)*(?:%3BUA-\\d+-\\d+%3A[\\w-]+(?:%2C[\\w-]+)*)*$")
      , Qm = /^~?[\w-]+(?:\.~?[\w-]+)*$/
      , Rm = /^\d+\.fls\.doubleclick\.net$/
      , Sm = /;gac=([^;?]+)/
      , Tm = /;gacgb=([^;?]+)/;
    function Um(a, b) {
        if (Rm.test(H.location.host)) {
            var c = H.location.href.match(b);
            return c && c.length === 2 && c[1].match(Pm) ? decodeURIComponent(c[1]) : ""
        }
        for (var d = [], e = la(Object.keys(a)), f = e.next(); !f.done; f = e.next()) {
            for (var k = f.value, l = [], m = a[k], n = 0; n < m.length; n++)
                l.push(m[n].W);
            d.push(k + ":" + l.join(","))
        }
        return d.length > 0 ? d.join(";") : ""
    }
    function Vm(a, b, c) {
        for (var d = Ll(Kl()) ? sl("_gac_gb", !0) : {}, e = [], f = !1, k = la(Object.keys(d)), l = k.next(); !l.done; l = k.next()) {
            var m = l.value
              , n = rm("_gac_gb_" + m, a, b, c);
            f = f || n.length !== 0 && n.some(function(p) {
                return p === 1
            });
            e.push(m + ":" + n.join(","))
        }
        return {
            Jk: f ? e.join(";") : "",
            Ik: Um(d, Tm)
        }
    }
    function Wm(a) {
        var b = H.location.href.match(new RegExp(";" + a + "=([^;?]+)"));
        return b && b.length === 2 && b[1].match(Qm) ? b[1] : void 0
    }
    function Xm(a) {
        var b = {
            Sf: void 0,
            Tf: void 0
        }, c, d;
        Rm.test(H.location.host) && (c = Wm("gclgs"),
        d = Wm("gclst"));
        if (c && d)
            b.Sf = c,
            b.Tf = d;
        else {
            var e = tb()
              , f = Tl((a || "_gcl") + "_gs")
              , k = f.map(function(m) {
                return m.W
            })
              , l = f.map(function(m) {
                return e - m.timestamp
            });
            k.length > 0 && l.length > 0 && (b.Sf = k.join("."),
            b.Tf = l.join("."))
        }
        return b
    }
    function Ym(a, b, c) {
        if (Rm.test(H.location.host)) {
            var d = Wm(c);
            if (d)
                return [{
                    W: d
                }]
        } else {
            if (b === "gclid")
                return Ol((a || "_gcl") + "_aw");
            if (b === "wbraid")
                return Ol((a || "_gcl") + "_gb");
            if (b === "braids")
                return Ql({
                    prefix: a
                })
        }
        return []
    }
    function Zm(a) {
        return Ym(a, "gclid", "gclaw").map(function(b) {
            return b.W
        }).join(".")
    }
    function $m(a) {
        return Ym(a, "wbraid", "gclgb").map(function(b) {
            return b.W
        }).join(".")
    }
    function an(a) {
        return Ym(a, "braids", "gclgb").map(function(b) {
            return b.W
        }).join(".")
    }
    function bn(a, b) {
        return Rm.test(H.location.host) ? !(Wm("gclaw") || Wm("gac")) : vm(a, b)
    }
    function cn(a, b, c) {
        var d;
        d = c ? sm(a, b) : rm((b && b.prefix || "_gcl") + "_gb", a, b);
        return d.length === 0 || d.every(function(e) {
            return e === 0
        }) ? "" : d.join(".")
    }
    ;function dn() {
        var a = E.__uspapi;
        if (gb(a)) {
            var b = "";
            try {
                a("getUSPData", 1, function(c, d) {
                    if (d && c) {
                        var e = c.uspString;
                        e && RegExp("^[\\da-zA-Z-]{1,20}$").test(e) && (b = e)
                    }
                })
            } catch (c) {}
            return b
        }
    }
    ;function nn(a) {
        var b = S(a.j, M.g.Bb)
          , c = S(a.j, M.g.Ab);
        b && !c ? (a.eventName !== M.g.X && a.eventName !== M.g.Mc && L(131),
        a.isAborted = !0) : !b && c && (L(132),
        a.isAborted = !0)
    }
    function on(a) {
        var b = T(M.g.O) ? He.pscdl : "denied";
        b != null && (a.o[M.g.ae] = b)
    }
    function pn(a) {
        var b = jj(!0);
        a.o[M.g.zb] = b
    }
    function qn(a) {
        Yj() && (a.o[M.g.vc] = 1)
    }
    function gn() {
        var a = H.title;
        if (a === void 0 || a === "")
            return "";
        var b = function(d) {
            try {
                return decodeURIComponent(d),
                !0
            } catch (e) {
                return !1
            }
        };
        a = encodeURIComponent(a);
        for (var c = 256; c > 0 && !b(a.substring(0, c)); )
            c--;
        return decodeURIComponent(a.substring(0, c))
    }
    function rn(a) {
        if (P(12)) {
            var b = S(a.j, M.g.Ka);
            a.o[M.g.od] || (a.o[M.g.od] = {});
            a.o[M.g.od].ce = b
        }
    }
    ;function yn(a, b, c, d) {
        var e = Yb(), f;
        if (e === 1)
            a: {
                var k = Te;
                k = k.toLowerCase();
                for (var l = "https://" + k, m = "http://" + k, n = 1, p = H.getElementsByTagName("script"), q = 0; q < p.length && q < 100; q++) {
                    var r = p[q].src;
                    if (r) {
                        r = r.toLowerCase();
                        if (r.indexOf(m) === 0) {
                            f = 3;
                            break a
                        }
                        n === 1 && r.indexOf(l) === 0 && (n = 2)
                    }
                }
                f = n
            }
        else
            f = e;
        return (f === 2 || d || "http:" != E.location.protocol ? a : b) + c
    }
    ;function Ln(a) {
        return {
            getDestinationId: function() {
                return a.target.da
            },
            getEventName: function() {
                return a.eventName
            },
            setEventName: function(b) {
                a.eventName = b
            },
            getHitData: function(b) {
                return a.o[b]
            },
            setHitData: function(b, c) {
                a.o[b] = c
            },
            setHitDataIfNotDefined: function(b, c) {
                a.o[b] === void 0 && (a.o[b] = c)
            },
            copyToHitData: function(b, c) {
                a.copyToHitData(b, c)
            },
            getMetadata: function(b) {
                return a.metadata[b]
            },
            setMetadata: function(b, c) {
                a.metadata[b] = c
            },
            isAborted: function() {
                return a.isAborted
            },
            abort: function() {
                a.isAborted = !0
            },
            getFromEventContext: function(b) {
                return S(a.j, b)
            },
            Rm: function() {
                return a
            },
            getHitKeys: function() {
                return Object.keys(a.o)
            }
        }
    }
    ;var Rn, Sn = !1;
    function Tn(a) {
        if (!Sn) {
            Sn = !0;
            Rn = Rn || {}
        }
        return Rn[a]
    }
    function Un() {
        var a = E.screen;
        return {
            width: a ? a.width : 0,
            height: a ? a.height : 0
        }
    }
    function Vn(a) {
        if (H.hidden)
            return !0;
        var b = a.getBoundingClientRect();
        if (b.top === b.bottom || b.left === b.right || !E.getComputedStyle)
            return !0;
        var c = E.getComputedStyle(a, null);
        if (c.visibility === "hidden")
            return !0;
        for (var d = a, e = c; d; ) {
            if (e.display === "none")
                return !0;
            var f = e.opacity
              , k = e.filter;
            if (k) {
                var l = k.indexOf("opacity(");
                l >= 0 && (k = k.substring(l + 8, k.indexOf(")", l)),
                k.charAt(k.length - 1) === "%" && (k = k.substring(0, k.length - 1)),
                f = String(Math.min(Number(k), Number(f))))
            }
            if (f !== void 0 && Number(f) <= 0)
                return !0;
            (d = d.parentElement) && (e = E.getComputedStyle(d, null))
        }
        return !1
    }
    var Qo = Number('') || 5
      , Ro = Number('') || 50
      , So = kb();
    var Xo = {
        hk: Number('') || 500,
        Sj: Number('') || 5E3,
        Uh: Number('20') || 10,
        bj: Number('') || 5E3
    };
    function Yo(a) {
        return a.performance && a.performance.now() || Date.now()
    }
    var Zo = function(a, b) {
        var c;
        return c
    };
    var $o = "https://" + Ge.Kc + "/gtm/static/", ap;
    function fp(a, b) {}
    var gp = function(a, b, c, d) {};
    function hp(a, b, c, d) {}
    function ip(a, b, c, d) {}
    var jp = void 0;
    function kp(a) {
        var b = [];
        return b
    }
    ;!$i("Android") || bj();
    bj();
    $i("Safari") && (bj() || (aj() ? 0 : $i("Coast")) || (aj() ? 0 : $i("Opera")) || (aj() ? 0 : $i("Edge")) || (aj() ? Zi("Microsoft Edge") : $i("Edg/")) || aj() && Zi("Opera"));
    var lp = {}
      , mp = null
      , np = function(a) {
        for (var b = [], c = 0, d = 0; d < a.length; d++) {
            var e = a.charCodeAt(d);
            e > 255 && (b[c++] = e & 255,
            e >>= 8);
            b[c++] = e
        }
        var f = 4;
        f === void 0 && (f = 0);
        if (!mp) {
            mp = {};
            for (var k = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""), l = ["+/=", "+/", "-_=", "-_.", "-_"], m = 0; m < 5; m++) {
                var n = k.concat(l[m].split(""));
                lp[m] = n;
                for (var p = 0; p < n.length; p++) {
                    var q = n[p];
                    mp[q] === void 0 && (mp[q] = p)
                }
            }
        }
        for (var r = lp[f], t = Array(Math.floor(b.length / 3)), u = r[64] || "", v = 0, w = 0; v < b.length - 2; v += 3) {
            var x = b[v]
              , y = b[v + 1]
              , z = b[v + 2]
              , A = r[x >> 2]
              , C = r[(x & 3) << 4 | y >> 4]
              , G = r[(y & 15) << 2 | z >> 6]
              , D = r[z & 63];
            t[w++] = "" + A + C + G + D
        }
        var F = 0
          , K = u;
        switch (b.length - v) {
        case 2:
            F = b[v + 1],
            K = r[(F & 15) << 2] || u;
        case 1:
            var I = b[v];
            t[w] = "" + r[I >> 2] + r[(I & 3) << 4 | F >> 4] + K + u
        }
        return t.join("")
    };
    var op = "platform platformVersion architecture model uaFullVersion bitness fullVersionList wow64".split(" ");
    function pp() {
        var a;
        return (a = E.google_tag_data) != null ? a : E.google_tag_data = {}
    }
    function qp() {
        var a = E.google_tag_data, b;
        if (a != null && a.uach) {
            var c = a.uach
              , d = Object.assign({}, c);
            c.fullVersionList && (d.fullVersionList = c.fullVersionList.slice(0));
            b = d
        } else
            b = null;
        return b
    }
    function rp() {
        var a, b;
        return (b = (a = E.google_tag_data) == null ? void 0 : a.uach_promise) != null ? b : null
    }
    function sp() {
        var a, b;
        return typeof ((a = E.navigator) == null ? void 0 : (b = a.userAgentData) == null ? void 0 : b.getHighEntropyValues) === "function"
    }
    function tp() {
        if (!sp())
            return null;
        var a = pp();
        if (a.uach_promise)
            return a.uach_promise;
        var b = E.navigator.userAgentData.getHighEntropyValues(op).then(function(c) {
            a.uach != null || (a.uach = c);
            return c
        });
        return a.uach_promise = b
    }
    ;function zp(a) {
        var b;
        b = b === void 0 ? document : b;
        var c;
        return !((c = b.featurePolicy) == null || !c.allowedFeatures().includes(a))
    }
    ;function Ap() {
        return zp("join-ad-interest-group") && gb(Ob.joinAdInterestGroup)
    }
    function Bp(a, b) {
        var c = db[3] === void 0 ? 1 : db[3]
          , d = 'iframe[data-tagging-id="' + b + '"]'
          , e = [];
        try {
            if (c === 1) {
                var f = H.querySelector(d);
                f && (e = [f])
            } else
                e = Array.from(H.querySelectorAll(d))
        } catch (q) {}
        var k;
        a: {
            try {
                k = H.querySelectorAll('iframe[allow="join-ad-interest-group"][data-tagging-id*="-"]');
                break a
            } catch (q) {}
            k = void 0
        }
        var l = k, m = ((l == null ? void 0 : l.length) || 0) >= (db[2] === void 0 ? 50 : db[2]), n;
        if (n = e.length >= 1) {
            var p = Number(e[e.length - 1].dataset.loadTime);
            p !== void 0 && tb() - p < (db[1] === void 0 ? 6E4 : db[1]) ? ($a("TAGGING", 9),
            n = !0) : n = !1
        }
        if (!n) {
            if (c === 1)
                if (e.length >= 1)
                    Cp(e[0]);
                else {
                    if (m) {
                        $a("TAGGING", 10);
                        return
                    }
                }
            else
                e.length >= c ? Cp(e[0]) : m && Cp(l[0]);
            Zb(a, void 0, {
                allow: "join-ad-interest-group"
            }, {
                taggingId: b,
                loadTime: tb()
            })
        }
    }
    function Cp(a) {
        try {
            a.parentNode.removeChild(a)
        } catch (b) {}
    }
    function Dp() {
        return "https://td.doubleclick.net"
    }
    ;var wq = {
        H: {
            wg: "ads_conversion_hit",
            Jc: "container_execute_start",
            Ag: "container_setup_end",
            af: "container_setup_start",
            yg: "container_blocking_end",
            zg: "container_execute_end",
            Bg: "container_yield_end",
            bf: "container_yield_start",
            Jh: "event_execute_end",
            Ih: "event_evaluation_end",
            Cf: "event_evaluation_start",
            Kh: "event_setup_end",
            nd: "event_setup_start",
            Mh: "ga4_conversion_hit",
            rd: "page_load",
            Bm: "pageview",
            Fb: "snippet_load",
            ki: "tag_callback_error",
            li: "tag_callback_failure",
            mi: "tag_callback_success",
            ni: "tag_execute_end",
            Ac: "tag_execute_start"
        }
    };
    function xq() {
        function a(c, d) {
            var e = ab(d);
            e && b.push([c, e])
        }
        var b = [];
        a("u", "GTM");
        a("ut", "TAGGING");
        a("h", "HEALTH");
        return b
    }
    ;var yq = !1;
    function ir(a, b) {}
    function jr(a, b) {}
    function kr(a, b) {}
    function lr(a, b) {}
    function mr() {
        var a = {};
        return a
    }
    function ar(a) {
        a = a === void 0 ? !0 : a;
        var b = {};
        return b
    }
    function nr() {}
    function or(a, b) {}
    function pr(a, b, c) {}
    function qr(a, b) {
        var c, d = E.GooglebQhCsO;
        d || (d = {},
        E.GooglebQhCsO = d);
        c = d;
        if (c[a])
            return !1;
        c[a] = [];
        c[a][0] = b;
        return !0
    }
    ;var rr = function(a, b, c, d) {
        var e = ej(a, "fmt");
        if (b) {
            var f = ej(a, "random")
              , k = ej(a, "label") || "";
            if (!f)
                return !1;
            var l = np(decodeURIComponent(k.replace(/\+/g, " ")) + ":" + decodeURIComponent(f.replace(/\+/g, " ")));
            if (!qr(l, b))
                return !1
        }
        e && e != 4 && (a = gj(a, "rfmt", e));
        var m = gj(a, "fmt", 4);
        Xb(m, function() {
            E.google_noFurtherRedirects && b && b.call && (E.google_noFurtherRedirects = null,
            b())
        }, c, d, H.getElementsByTagName("script")[0].parentElement || void 0);
        return !0
    };
    function Ir(a, b) {
        if (data.entities) {
            var c = data.entities[a];
            if (c)
                return c[b]
        }
    }
    ;function Jr(a) {
        var b = gg(), c;
        c = c === void 0 ? !1 : c;
        Kr().addRestriction(0, b, a, c)
    }
    function Lr(a) {
        var b = gg(), c;
        c = c === void 0 ? !1 : c;
        Kr().addRestriction(1, b, a, c)
    }
    function Mr() {
        var a = gg();
        return Kr().getRestrictions(1, a)
    }
    var Nr = function() {
        this.m = {};
        this.D = {}
    }
      , Or = function(a, b) {
        var c = a.m[b];
        c || (c = {
            _entity: {
                internal: [],
                external: []
            },
            _event: {
                internal: [],
                external: []
            }
        },
        a.m[b] = c);
        return c
    };
    Nr.prototype.addRestriction = function(a, b, c, d) {
        d = d === void 0 ? !1 : d;
        if (!d || !this.D[b]) {
            var e = Or(this, b);
            a === 0 ? d ? e._entity.external.push(c) : e._entity.internal.push(c) : a === 1 && (d ? e._event.external.push(c) : e._event.internal.push(c))
        }
    }
    ;
    Nr.prototype.getRestrictions = function(a, b) {
        var c = Or(this, b);
        if (a === 0) {
            var d, e;
            return [].concat(na((c == null ? void 0 : (d = c._entity) == null ? void 0 : d.internal) || []), na((c == null ? void 0 : (e = c._entity) == null ? void 0 : e.external) || []))
        }
        if (a === 1) {
            var f, k;
            return [].concat(na((c == null ? void 0 : (f = c._event) == null ? void 0 : f.internal) || []), na((c == null ? void 0 : (k = c._event) == null ? void 0 : k.external) || []))
        }
        return []
    }
    ;
    Nr.prototype.getExternalRestrictions = function(a, b) {
        var c = Or(this, b), d, e;
        return a === 0 ? (c == null ? void 0 : (d = c._entity) == null ? void 0 : d.external) || [] : (c == null ? void 0 : (e = c._event) == null ? void 0 : e.external) || []
    }
    ;
    Nr.prototype.removeExternalRestrictions = function(a) {
        var b = Or(this, a);
        b._event && (b._event.external = []);
        b._entity && (b._entity.external = []);
        this.D[a] = !0
    }
    ;
    function Kr() {
        var a = He.r;
        a || (a = new Nr,
        He.r = a);
        return a
    }
    ;var Pr = new RegExp(/^(.*\.)?(google|youtube|blogger|withgoogle)(\.com?)?(\.[a-z]{2})?\.?$/)
      , Qr = {
        cl: ["ecl"],
        customPixels: ["nonGooglePixels"],
        ecl: ["cl"],
        ehl: ["hl"],
        gaawc: ["googtag"],
        hl: ["ehl"],
        html: ["customScripts", "customPixels", "nonGooglePixels", "nonGoogleScripts", "nonGoogleIframes"],
        customScripts: ["html", "customPixels", "nonGooglePixels", "nonGoogleScripts", "nonGoogleIframes"],
        nonGooglePixels: [],
        nonGoogleScripts: ["nonGooglePixels"],
        nonGoogleIframes: ["nonGooglePixels"]
    }
      , Rr = {
        cl: ["ecl"],
        customPixels: ["customScripts", "html"],
        ecl: ["cl"],
        ehl: ["hl"],
        gaawc: ["googtag"],
        hl: ["ehl"],
        html: ["customScripts"],
        customScripts: ["html"],
        nonGooglePixels: ["customPixels", "customScripts", "html", "nonGoogleScripts", "nonGoogleIframes"],
        nonGoogleScripts: ["customScripts", "html"],
        nonGoogleIframes: ["customScripts", "html", "nonGoogleScripts"]
    }
      , Sr = "google customPixels customScripts html nonGooglePixels nonGoogleScripts nonGoogleIframes".split(" ");
    function Tr() {
        var a = hf("gtm.allowlist") || hf("gtm.whitelist");
        a && L(9);
        Me && (a = ["google", "gtagfl", "lcl", "zone"]);
        Pr.test(E.location && E.location.hostname) && (Me ? L(116) : (L(117),
        Ur && (a = [],
        window.console && window.console.log && window.console.log("GTM blocked. See go/13687728."))));
        var b = a && xb(qb(a), Qr)
          , c = hf("gtm.blocklist") || hf("gtm.blacklist");
        c || (c = hf("tagTypeBlacklist")) && L(3);
        c ? L(8) : c = [];
        Pr.test(E.location && E.location.hostname) && (c = qb(c),
        c.push("nonGooglePixels", "nonGoogleScripts", "sandboxedScripts"));
        qb(c).indexOf("google") >= 0 && L(2);
        var d = c && xb(qb(c), Rr)
          , e = {};
        return function(f) {
            var k = f && f[tc.ma];
            if (!k || typeof k !== "string")
                return !0;
            k = k.replace(/^_*/, "");
            if (e[k] !== void 0)
                return e[k];
            var l = Xe[k] || []
              , m = !0;
            if (a) {
                var n;
                if (n = m)
                    a: {
                        if (b.indexOf(k) < 0)
                            if (l && l.length > 0)
                                for (var p = 0; p < l.length; p++) {
                                    if (b.indexOf(l[p]) < 0) {
                                        L(11);
                                        n = !1;
                                        break a
                                    }
                                }
                            else {
                                n = !1;
                                break a
                            }
                        n = !0
                    }
                m = n
            }
            var q = !1;
            if (c) {
                var r = d.indexOf(k) >= 0;
                if (r)
                    q = r;
                else {
                    var t = lb(d, l || []);
                    t && L(10);
                    q = t
                }
            }
            var u = !m || q;
            u || !(l.indexOf("sandboxedScripts") >= 0) || b && b.indexOf("sandboxedScripts") !== -1 || (u = lb(d, Sr));
            return e[k] = u
        }
    }
    var Ur = !1;
    Ur = !0;
    function Vr() {
        Yf && Jr(function(a) {
            var b = {};
            b[tc.ma] = "__" + a.entityId;
            for (var c in void 0)
                (void 0).hasOwnProperty(c) && (b["vtp_" + c] = (void 0)[c]);
            var d;
            if (fd(b)) {
                var e = b[tc.ma];
                if (!e)
                    throw Error("Error: No function name given for function call.");
                var f = Wc[e];
                d = !!f && !!f.runInSiloedMode
            } else
                d = !!Ir(b[tc.ma], 4);
            return d
        })
    }
    function Wr(a, b, c, d) {
        if (!Xr()) {
            var e = d.siloed ? bg(a) : a;
            if (!Vf().container[e]) {
                var f = Yr(a)
                  , k = yb(a, "GTM-")
                  , l = Ff()
                  , m = c ? "/gtag/js" : "/gtm.js"
                  , n = Ef(b, m + f);
                if (!n) {
                    var p = Ge.Kc + m;
                    l && Rb && k ? (p = Rb.replace(/^(?:https?:\/\/)?/i, "").split(/[?#]/)[0],
                    n = yn("https://", "http://", p + f)) : n = bf() ? af() + m + f : yn("https://", "http://", p + f)
                }
                d.siloed && pg({
                    ctid: e,
                    isDestination: !1
                });
                var q = jg();
                Vf().container[e] = {
                    state: 1,
                    context: d,
                    parent: q
                };
                Uf({
                    ctid: e,
                    isDestination: !1
                });
                Xb(n)
            }
        }
    }
    function Zr(a, b, c) {
        if (!Xr()) {
            var d = c.siloed ? bg(a) : a
              , e = Vf().destination[d];
            if (!e || !e.state)
                if (!c.siloed && qg())
                    Vf().destination[d] = {
                        state: 0,
                        transportUrl: b,
                        context: c,
                        parent: jg()
                    },
                    Uf({
                        ctid: d,
                        isDestination: !0
                    }),
                    L(91);
                else {
                    var f = "/gtag/destination" + Yr(a, !0)
                      , k = Ef(b, f);
                    k || (k = bf() ? af() + f : yn("https://", "http://", Ge.Kc + f));
                    c.siloed && pg({
                        ctid: d,
                        isDestination: !0
                    });
                    Vf().destination[d] = {
                        state: 1,
                        context: c,
                        parent: jg()
                    };
                    Uf({
                        ctid: d,
                        isDestination: !0
                    });
                    Xb(k)
                }
        }
    }
    function Yr(a, b) {
        b = b === void 0 ? !1 : b;
        var c = "?id=" + encodeURIComponent(a) + "&l=" + Ge.ub;
        if (!yb(a, "GTM-") || b)
            c += "&cx=c";
        P(68) && (c += "&gtm=" + bk());
        Ff() && (c += "&sign=" + Ge.Gf);
        var d = $e.D;
        d === 1 ? c += "&fps=fc" : d === 2 && (c += "&fps=fe");
        return c
    }
    function Xr() {
        if (Zj()) {
            return !0
        }
        return !1
    }
    ;var $r = [];
    function as() {
        var a = Zf.ctid;
        if (a) {
            var b = Xf.qd ? 1 : 0, c, d = ig(jg());
            c = d && d.context;
            return a + ";" + Zf.canonicalContainerId + ";" + (c && c.fromContainerExecution ? 1 : 0) + ";" + (c && c.source || 0) + ";" + b
        }
    }
    function bs() {
        var a = zf(E.location.href);
        return a.hostname + a.pathname
    }
    function cs() {
        var a = bs();
        a && yg("dl", encodeURIComponent(a));
        if (P(85)) {
            var b = as();
            b && yg("tdp", b)
        } else
            yg("tdp", function() {
                return $r.length > 0 ? $r.join(".") : void 0
            });
        var c = jj(!0);
        c !== void 0 && yg("frm", String(c))
    }
    ;var ds = !1
      , es = 0
      , fs = [];
    function gs(a) {
        if (!ds) {
            var b = H.createEventObject
              , c = H.readyState === "complete"
              , d = H.readyState === "interactive";
            if (!a || a.type !== "readystatechange" || c || !b && d) {
                ds = !0;
                for (var e = 0; e < fs.length; e++)
                    J(fs[e])
            }
            fs.push = function() {
                for (var f = Ma.apply(0, arguments), k = 0; k < f.length; k++)
                    J(f[k]);
                return 0
            }
        }
    }
    function hs() {
        if (!ds && es < 140) {
            es++;
            try {
                var a, b;
                (b = (a = H.documentElement).doScroll) == null || b.call(a, "left");
                gs()
            } catch (c) {
                E.setTimeout(hs, 50)
            }
        }
    }
    function is(a) {
        ds ? a() : fs.push(a)
    }
    ;function js(a, b) {
        return {
            entityType: 1,
            indexInOriginContainer: a,
            nameInOriginContainer: b,
            originContainerId: eg()
        }
    }
    ;var ls = function(a, b) {
        this.m = !1;
        this.J = [];
        this.eventData = {
            tags: []
        };
        this.N = !1;
        this.D = this.F = 0;
        ks(this, a, b)
    }
      , ms = function(a, b, c, d) {
        if (Je.hasOwnProperty(b) || b === "__zone")
            return -1;
        var e = {};
        Sa(d) && (e = g(d, e));
        e.id = c;
        e.status = "timeout";
        return a.eventData.tags.push(e) - 1
    }
      , ns = function(a, b, c, d) {
        var e = a.eventData.tags[b];
        e && (e.status = c,
        e.executionTime = d)
    }
      , os = function(a) {
        if (!a.m) {
            for (var b = a.J, c = 0; c < b.length; c++)
                b[c]();
            a.m = !0;
            a.J.length = 0
        }
    }
      , ks = function(a, b, c) {
        b !== void 0 && ps(a, b);
        c && E.setTimeout(function() {
            os(a)
        }, Number(c))
    }
      , ps = function(a, b) {
        var c = vb(function() {
            J(function() {
                b(eg(), a.eventData)
            })
        });
        a.m ? c() : a.J.push(c)
    }
      , qs = function(a) {
        a.F++;
        return vb(function() {
            a.D++;
            a.N && a.D >= a.F && os(a)
        })
    }
      , rs = function(a) {
        a.N = !0;
        a.D >= a.F && os(a)
    };
    var ss = {}
      , us = function() {
        return E[ts()]
    };
    function ts() {
        return E.GoogleAnalyticsObject || "ga"
    }
    var xs = function() {
        var a = eg();
    }
      , ys = function(a, b) {
        return function() {
            var c = us()
              , d = c && c.getByName && c.getByName(a);
            if (d) {
                var e = d.get("sendHitTask");
                d.set("sendHitTask", function(f) {
                    var k = f.get("hitPayload")
                      , l = f.get("hitCallback")
                      , m = k.indexOf("&tid=" + b) < 0;
                    m && (f.set("hitPayload", k.replace(/&tid=UA-[0-9]+-[0-9]+/, "&tid=" + b), !0),
                    f.set("hitCallback", void 0, !0));
                    e(f);
                    m && (f.set("hitPayload", k, !0),
                    f.set("hitCallback", l, !0),
                    f.set("_x_19", void 0, !0),
                    e(f))
                })
            }
        }
    };
    var Ds = ["es", "1"]
      , Es = {}
      , Fs = {};
    function Gs(a, b) {
        if (Of) {
            var c;
            c = b.match(/^(gtm|gtag)\./) ? encodeURIComponent(b) : "*";
            Es[a] = [["e", c], ["eid", a]];
            wi(a)
        }
    }
    function Hs(a) {
        var b = a.eventId
          , c = a.Ib;
        if (!Es[b])
            return [];
        var d = [];
        Fs[b] || d.push(Ds);
        d.push.apply(d, na(Es[b]));
        c && (Fs[b] = !0);
        return d
    }
    ;var Is = {}
      , Js = {}
      , Ks = {};
    function Ls(a, b, c, d) {
        Of && P(76) && ((d === void 0 ? 0 : d) ? (Ks[b] = Ks[b] || 0,
        ++Ks[b]) : c !== void 0 ? (Js[a] = Js[a] || {},
        Js[a][b] = Math.round(c)) : (Is[a] = Is[a] || {},
        Is[a][b] = (Is[a][b] || 0) + 1))
    }
    function Ms(a) {
        var b = a.eventId, c = a.Ib, d = Is[b] || {}, e = [], f;
        for (f in d)
            d.hasOwnProperty(f) && e.push("" + f + d[f]);
        c && delete Is[b];
        return e.length ? [["md", e.join(".")]] : []
    }
    function Ns(a) {
        var b = a.eventId, c = a.Ib, d = Js[b] || {}, e = [], f;
        for (f in d)
            d.hasOwnProperty(f) && e.push("" + f + d[f]);
        c && delete Js[b];
        return e.length ? [["mtd", e.join(".")]] : []
    }
    function Os() {
        for (var a = [], b = la(Object.keys(Ks)), c = b.next(); !c.done; c = b.next()) {
            var d = c.value;
            a.push("" + d + Ks[d])
        }
        return a.length ? [["mec", a.join(".")]] : []
    }
    ;var Ps = {}
      , Qs = {};
    function Rs(a, b, c) {
        if (Of && b) {
            var d = If(b);
            Ps[a] = Ps[a] || [];
            Ps[a].push(c + d);
            var e = (fd(b) ? "1" : "2") + d;
            Qs[a] = Qs[a] || [];
            Qs[a].push(e);
            wi(a)
        }
    }
    function Ss(a) {
        var b = a.eventId
          , c = a.Ib
          , d = []
          , e = Ps[b] || [];
        e.length && d.push(["tr", e.join(".")]);
        var f = Qs[b] || [];
        f.length && d.push(["ti", f.join(".")]);
        c && (delete Ps[b],
        delete Qs[b]);
        return d
    }
    ;function Ts(a, b, c, d) {
        var e = Uc[a]
          , f = Us(a, b, c, d);
        if (!f)
            return null;
        var k = gd(e[tc.hi], c, []);
        if (k && k.length) {
            var l = k[0];
            f = Ts(l.index, {
                onSuccess: f,
                onFailure: l.yi === 1 ? b.terminate : f,
                terminate: b.terminate
            }, c, d)
        }
        return f
    }
    function Us(a, b, c, d) {
        function e() {
            function w() {
                gh(3);
                var D = tb() - G;
                Rs(c.id, f, "7");
                ns(c.Sb, A, "exception", D);
                P(69) && pr(c, f, wq.H.ki);
                C || (C = !0,
                l())
            }
            if (f[tc.Wj])
                l();
            else {
                var x = ed(f, c, [])
                  , y = x[tc.Zi];
                if (y != null)
                    for (var z = 0; z < y.length; z++)
                        if (!T(y[z])) {
                            l();
                            return
                        }
                var A = ms(c.Sb, String(f[tc.ma]), Number(f[tc.vd]), x[tc.Xj])
                  , C = !1;
                x.vtp_gtmOnSuccess = function() {
                    if (!C) {
                        C = !0;
                        var D = tb() - G;
                        Rs(c.id, Uc[a], "5");
                        ns(c.Sb, A, "success", D);
                        P(69) && pr(c, f, wq.H.mi);
                        k()
                    }
                }
                ;
                x.vtp_gtmOnFailure = function() {
                    if (!C) {
                        C = !0;
                        var D = tb() - G;
                        Rs(c.id, Uc[a], "6");
                        ns(c.Sb, A, "failure", D);
                        P(69) && pr(c, f, wq.H.li);
                        l()
                    }
                }
                ;
                x.vtp_gtmTagId = f.tag_id;
                x.vtp_gtmEventId = c.id;
                c.priorityId && (x.vtp_gtmPriorityId = c.priorityId);
                Rs(c.id, f, "1");
                P(69) && or(c, f);
                var G = tb();
                try {
                    hd(x, {
                        event: c,
                        index: a,
                        type: 1
                    })
                } catch (D) {
                    w(D)
                }
                P(69) && pr(c, f, wq.H.ni)
            }
        }
        var f = Uc[a]
          , k = b.onSuccess
          , l = b.onFailure
          , m = b.terminate;
        if (c.isBlocked(f))
            return null;
        var n = gd(f[tc.oi], c, []);
        if (n && n.length) {
            var p = n[0]
              , q = Ts(p.index, {
                onSuccess: k,
                onFailure: l,
                terminate: m
            }, c, d);
            if (!q)
                return null;
            k = q;
            l = p.yi === 2 ? m : q
        }
        if (f[tc.Xh] || f[tc.Zj]) {
            var r = f[tc.Xh] ? Vc : c.Xl
              , t = k
              , u = l;
            if (!r[a]) {
                var v = Vs(a, r, vb(e));
                k = v.onSuccess;
                l = v.onFailure
            }
            return function() {
                r[a](t, u)
            }
        }
        return e
    }
    function Vs(a, b, c) {
        var d = []
          , e = [];
        b[a] = Ws(d, e, c);
        return {
            onSuccess: function() {
                b[a] = Xs;
                for (var f = 0; f < d.length; f++)
                    d[f]()
            },
            onFailure: function() {
                b[a] = Ys;
                for (var f = 0; f < e.length; f++)
                    e[f]()
            }
        }
    }
    function Ws(a, b, c) {
        return function(d, e) {
            a.push(d);
            b.push(e);
            c()
        }
    }
    function Xs(a) {
        a()
    }
    function Ys(a, b) {
        b()
    }
    ;var at = function(a, b) {
        for (var c = [], d = 0; d < Uc.length; d++)
            if (a[d]) {
                var e = Uc[d];
                var f = qs(b.Sb);
                try {
                    var k = Ts(d, {
                        onSuccess: f,
                        onFailure: f,
                        terminate: f
                    }, b, d);
                    if (k) {
                        var l = e[tc.ma];
                        if (!l)
                            throw Error("Error: No function name given for function call.");
                        var m = Wc[l];
                        c.push({
                            Ri: d,
                            Ki: (m ? m.priorityOverride || 0 : 0) || Ir(e[tc.ma], 1) || 0,
                            execute: k
                        })
                    } else
                        Zs(d, b),
                        f()
                } catch (p) {
                    f()
                }
            }
        c.sort($s);
        for (var n = 0; n < c.length; n++)
            c[n].execute();
        return c.length > 0
    };
    function $s(a, b) {
        var c, d = b.Ki, e = a.Ki;
        c = d > e ? 1 : d < e ? -1 : 0;
        var f;
        if (c !== 0)
            f = c;
        else {
            var k = a.Ri
              , l = b.Ri;
            f = k > l ? 1 : k < l ? -1 : 0
        }
        return f
    }
    function Zs(a, b) {
        if (Of) {
            var c = function(d) {
                var e = b.isBlocked(Uc[d]) ? "3" : "4"
                  , f = gd(Uc[d][tc.hi], b, []);
                f && f.length && c(f[0].index);
                Rs(b.id, Uc[d], e);
                var k = gd(Uc[d][tc.oi], b, []);
                k && k.length && c(k[0].index)
            };
            c(a)
        }
    }
    var dt = !1, bt;
    var it = function(a) {
        var b = a["gtm.uniqueEventId"]
          , c = a["gtm.priorityId"]
          , d = a.event;
        if (P(69)) {}
        if (d === "gtm.js") {
            if (dt)
                return !1;
            dt = !0
        }
        var e = !1
          , f = Mr()
          , k = g(a);
        if (!f.every(function(t) {
            return t({
                originalEventData: k
            })
        })) {
            if (d !== "gtm.js" && d !== "gtm.init" && d !== "gtm.init_consent")
                return !1;
            e = !0
        }
        Gs(b, d);
        var l = a.eventCallback
          , m = a.eventTimeout
          , n = {
            id: b,
            priorityId: c,
            name: d,
            isBlocked: et(k, e),
            Xl: [],
            logMacroError: function() {
                L(6);
                gh(0)
            },
            cachedModelValues: ft(),
            Sb: new ls(function() {
                if (P(69)) {}
                l && l.apply(l, [].slice.call(arguments, 0))
            }
            ,m),
            originalEventData: k
        };
        P(76) && Of && (n.reportMacroDiscrepancy = Ls);
        P(69) && kr(n.id, n.name);
        var p = id(n);
        P(69) && lr(n.id, n.name);
        e && (p = gt(p));
        if (P(69)) {}
        var q = at(p, n)
          , r = !1;
        rs(n.Sb);
        d !== "gtm.js" && d !== "gtm.sync" || xs();
        return ht(p, q) || r
    };
    function ft() {
        var a = {};
        a.event = mf("event", 1);
        a.ecommerce = mf("ecommerce", 1);
        a.gtm = mf("gtm");
        a.eventModel = mf("eventModel");
        return a
    }
    function et(a, b) {
        var c = Tr();
        return function(d) {
            if (c(d))
                return !0;
            var e = d && d[tc.ma];
            if (!e || typeof e != "string")
                return !0;
            e = e.replace(/^_*/, "");
            var f, k = gg();
            f = Kr().getRestrictions(0, k);
            var l = a;
            b && (l = g(a),
            l["gtm.uniqueEventId"] = Number.MAX_SAFE_INTEGER);
            for (var m = Xe[e] || [], n = la(f), p = n.next(); !p.done; p = n.next()) {
                var q = p.value;
                try {
                    if (!q({
                        entityId: e,
                        securityGroups: m,
                        originalEventData: l
                    }))
                        return !0
                } catch (r) {
                    return !0
                }
            }
            return !1
        }
    }
    function gt(a) {
        for (var b = [], c = 0; c < a.length; c++)
            if (a[c]) {
                var d = String(Uc[c][tc.ma]);
                if (Ie[d] || Uc[c][tc.bk] !== void 0 || Ir(d, 2))
                    b[c] = !0
            }
        return b
    }
    function ht(a, b) {
        if (!b)
            return b;
        for (var c = 0; c < a.length; c++)
            if (a[c] && Uc[c] && !Je[String(Uc[c][tc.ma])])
                return !0;
        return !1
    }
    var jt = 0;
    function kt(a, b) {
        return arguments.length === 1 ? lt("config", a) : lt("config", a, b)
    }
    function mt(a, b, c) {
        c = c || {};
        c[M.g.Qb] = a;
        return lt("event", b, c)
    }
    function lt() {
        return arguments
    }
    ;var nt = function() {
        this.messages = [];
        this.m = []
    };
    nt.prototype.enqueue = function(a, b, c) {
        var d = this.messages.length + 1;
        a["gtm.uniqueEventId"] = b;
        a["gtm.priorityId"] = d;
        var e = Object.assign({}, c, {
            eventId: b,
            priorityId: d,
            fromContainerExecution: !0
        })
          , f = {
            message: a,
            notBeforeEventId: b,
            priorityId: d,
            messageContext: e
        };
        this.messages.push(f);
        for (var k = 0; k < this.m.length; k++)
            try {
                this.m[k](f)
            } catch (l) {}
    }
    ;
    nt.prototype.listen = function(a) {
        this.m.push(a)
    }
    ;
    nt.prototype.get = function() {
        for (var a = {}, b = 0; b < this.messages.length; b++) {
            var c = this.messages[b]
              , d = a[c.notBeforeEventId];
            d || (d = [],
            a[c.notBeforeEventId] = d);
            d.push(c)
        }
        return a
    }
    ;
    nt.prototype.prune = function(a) {
        for (var b = [], c = [], d = 0; d < this.messages.length; d++) {
            var e = this.messages[d];
            e.notBeforeEventId === a ? b.push(e) : c.push(e)
        }
        this.messages = c;
        return b
    }
    ;
    function ot(a, b, c) {
        c.eventMetadata = c.eventMetadata || {};
        c.eventMetadata.source_canonical_id = Zf.canonicalContainerId;
        pt().enqueue(a, b, c)
    }
    function qt() {
        var a = rt;
        pt().listen(a)
    }
    function pt() {
        var a = He.mb;
        a || (a = new nt,
        He.mb = a);
        return a
    }
    ;var st = {}
      , tt = {};
    function ut(a, b) {
        for (var c = [], d = [], e = {}, f = 0; f < a.length; e = {
            mg: void 0,
            Vf: void 0
        },
        f++) {
            var k = a[f];
            if (k.indexOf("-") >= 0) {
                if (e.mg = Ch(k, b),
                e.mg) {
                    var l = cg();
                    jb(l, function(r) {
                        return function(t) {
                            return r.mg.da === t
                        }
                    }(e)) ? c.push(k) : d.push(k)
                }
            } else {
                var m = st[k] || [];
                e.Vf = {};
                m.forEach(function(r) {
                    return function(t) {
                        r.Vf[t] = !0
                    }
                }(e));
                for (var n = $f(), p = 0; p < n.length; p++)
                    if (e.Vf[n[p]]) {
                        c = c.concat(cg());
                        break
                    }
                var q = tt[k] || [];
                q.length && (c = c.concat(q))
            }
        }
        return {
            sl: c,
            vl: d
        }
    }
    function vt(a) {
        B(st, function(b, c) {
            var d = c.indexOf(a);
            d >= 0 && c.splice(d, 1)
        })
    }
    function wt(a) {
        B(tt, function(b, c) {
            var d = c.indexOf(a);
            d >= 0 && c.splice(d, 1)
        })
    }
    var xt = "HA GF G UA AW DC MC".split(" ")
      , zt = !1
      , At = !1
      , Bt = !1
      , Ct = !1;
    function Dt(a, b) {
        a.hasOwnProperty("gtm.uniqueEventId") || Object.defineProperty(a, "gtm.uniqueEventId", {
            value: Ye()
        });
        b.eventId = a["gtm.uniqueEventId"];
        b.priorityId = a["gtm.priorityId"];
        return {
            eventId: b.eventId,
            priorityId: b.priorityId
        }
    }
    var Et = void 0
      , Ft = void 0;
    function Gt(a, b, c) {
        var d = g(a, null);
        d.eventId = void 0;
        d.inheritParentConfig = void 0;
        Object.keys(b).some(function(f) {
            return b[f] !== void 0
        }) && L(136);
        var e = g(b, null);
        g(c, e);
        ot(kt($f()[0], e), a.eventId, d)
    }
    function Ht(a) {
        for (var b = la([M.g.yc, M.g.Eb]), c = b.next(); !c.done; c = b.next()) {
            var d = c.value
              , e = a && a[d] || Ei.D[d];
            if (e)
                return e
        }
    }
    var It = [M.g.yc, M.g.Eb, M.g.rc, M.g.ib, M.g.qb, M.g.Aa, M.g.qa, M.g.La, M.g.Qa, M.g.xb]
      , Jt = {
        config: function(a, b) {
            var c = Dt(a, b);
            if (!(a.length < 2) && h(a[1])) {
                var d = {};
                if (a.length > 2) {
                    if (a[2] !== void 0 && !Sa(a[2]) || a.length > 3)
                        return;
                    d = a[2]
                }
                var e = Ch(a[1], b.isGtmEvent);
                if (e) {
                    var f, k, l;
                    a: {
                        if (!Xf.qd) {
                            var m = ig(jg());
                            if (sg(m)) {
                                var n = m.parent
                                  , p = n.isDestination;
                                l = {
                                    Bl: ig(n),
                                    rl: p
                                };
                                break a
                            }
                        }
                        l = void 0
                    }
                    var q = l;
                    q && (f = q.Bl,
                    k = q.rl);
                    Gs(c.eventId, "gtag.config");
                    var r = e.da
                      , t = e.id !== r;
                    if (t ? cg().indexOf(r) === -1 : $f().indexOf(r) === -1) {
                        if (!b.inheritParentConfig && !d[M.g.Bb]) {
                            var u = Ht(d);
                            if (t)
                                Zr(r, u, {
                                    source: 2,
                                    fromContainerExecution: b.fromContainerExecution
                                });
                            else if (f !== void 0 && f.containers.indexOf(r) !== -1) {
                                var v = d;
                                Et ? Gt(b, v, Et) : Ft || (Ft = g(v, null))
                            } else
                                Wr(r, u, !0, {
                                    source: 2,
                                    fromContainerExecution: b.fromContainerExecution
                                })
                        }
                    } else {
                        if (f && (L(128),
                        k && L(130),
                        b.inheritParentConfig)) {
                            var w = d;
                            Ft ? Gt(b, Ft, w) : !w[M.g.Rb] && Le && Et || (Et = g(w, null));
                            return
                        }
                        var x = d;
                        if (!Bt && (Bt = !0,
                        At))
                            for (var y = la(It), z = y.next(); !z.done; z = y.next())
                                if (x.hasOwnProperty(z.value)) {
                                    fh("erc");
                                    break
                                }
                        Pf && !Yf && (jt === 1 && (wg.mcc = !1),
                        jt = 2);
                        ch = !0;
                        if (Le && !t && !d[M.g.Rb]) {
                            var A = Ct;
                            Ct = !0;
                            if (A)
                                return
                        }
                        zt || L(43);
                        if (!b.noTargetGroup)
                            if (t) {
                                wt(e.id);
                                var C = e.id
                                  , G = d[M.g.oe] || "default";
                                G = String(G).split(",");
                                for (var D = 0; D < G.length; D++) {
                                    var F = tt[G[D]] || [];
                                    tt[G[D]] = F;
                                    F.indexOf(C) < 0 && F.push(C)
                                }
                            } else {
                                vt(e.id);
                                var K = e.id
                                  , I = d[M.g.oe] || "default";
                                I = I.toString().split(",");
                                for (var R = 0; R < I.length; R++) {
                                    var Q = st[I[R]] || [];
                                    st[I[R]] = Q;
                                    Q.indexOf(K) < 0 && Q.push(K)
                                }
                            }
                        delete d[M.g.oe];
                        var V = b.eventMetadata || {};
                        V.hasOwnProperty("is_external_event") || (V.is_external_event = !b.fromContainerExecution);
                        b.eventMetadata = V;
                        delete d[M.g.ed];
                        for (var X = t ? [e.id] : cg(), O = 0; O < X.length; O++) {
                            var ea = d
                              , da = X[O]
                              , aa = g(b, null)
                              , qa = Ch(da, aa.isGtmEvent);
                            qa && Ei.push("config", [ea], qa, aa)
                        }
                    }
                }
            }
        },
        consent: function(a, b) {
            if (a.length === 3) {
                L(39);
                var c = Dt(a, b)
                  , d = a[1]
                  , e = a[2];
                b.fromContainerExecution || (e[M.g.M] && L(139),
                e[M.g.na] && L(140));
                d === "default" ? rh(e) : d === "update" ? sh(e, c) : d === "declare" && b.fromContainerExecution && qh(e)
            }
        },
        event: function(a, b) {
            var c = a[1];
            if (!(a.length < 2) && h(c)) {
                var d = void 0;
                if (a.length > 2) {
                    if (!Sa(a[2]) && a[2] !== void 0 || a.length > 3)
                        return;
                    d = a[2]
                }
                var e = d
                  , f = {}
                  , k = (f.event = c,
                f);
                e && (k.eventModel = g(e, null),
                e[M.g.ed] && (k.eventCallback = e[M.g.ed]),
                e[M.g.ke] && (k.eventTimeout = e[M.g.ke]));
                var l = Dt(a, b)
                  , m = l.eventId
                  , n = l.priorityId;
                k["gtm.uniqueEventId"] = m;
                n && (k["gtm.priorityId"] = n);
                if (c === "optimize.callback")
                    return k.eventModel = k.eventModel || {},
                    k;
                var p;
                var q = d
                  , r = q && q[M.g.Qb];
                r === void 0 && (r = hf(M.g.Qb, 2),
                r === void 0 && (r = "default"));
                if (h(r) || Array.isArray(r)) {
                    var t;
                    t = b.isGtmEvent ? h(r) ? [r] : r : r.toString().replace(/\s+/g, "").split(",");
                    var u = ut(t, b.isGtmEvent)
                      , v = u.sl
                      , w = u.vl;
                    if (w.length)
                        for (var x = Ht(q), y = 0; y < w.length; y++) {
                            var z = Ch(w[y], b.isGtmEvent);
                            z && Zr(z.da, x, {
                                source: 3,
                                fromContainerExecution: b.fromContainerExecution
                            })
                        }
                    p = Dh(v, b.isGtmEvent)
                } else
                    p = void 0;
                var A = p;
                if (A) {
                    var C;
                    !A.length || ((C = b.eventMetadata) == null ? 0 : C.em_event) || (At = !0);
                    Gs(m, c);
                    for (var G = [], D = 0; D < A.length; D++) {
                        var F = A[D]
                          , K = g(b, null);
                        if (xt.indexOf(kg(F.prefix)) !== -1) {
                            var I = g(d, null)
                              , R = K.eventMetadata || {};
                            R.hasOwnProperty("is_external_event") || (R.is_external_event = !K.fromContainerExecution);
                            K.eventMetadata = R;
                            delete I[M.g.ed];
                            Di(c, I, F.id, K);
                            Pf && !Yf && jt === 0 && (yg("mcc", "1"),
                            jt = 1);
                            ch = !0
                        }
                        G.push(F.id)
                    }
                    k.eventModel = k.eventModel || {};
                    A.length > 0 ? k.eventModel[M.g.Qb] = G.join() : delete k.eventModel[M.g.Qb];
                    zt || L(43);
                    b.noGtmEvent === void 0 && b.eventMetadata && b.eventMetadata.syn_or_mod && (b.noGtmEvent = !0);
                    k.eventModel[M.g.Ab] && (b.noGtmEvent = !0);
                    return b.noGtmEvent ? void 0 : k
                }
            }
        },
        get: function(a, b) {
            L(53);
            if (a.length === 4 && h(a[1]) && h(a[2]) && gb(a[3])) {
                var c = Ch(a[1], b.isGtmEvent)
                  , d = String(a[2])
                  , e = a[3];
                if (c) {
                    zt || L(43);
                    var f = Ht();
                    if (!jb(cg(), function(l) {
                        return c.da === l
                    }))
                        Zr(c.da, f, {
                            source: 4,
                            fromContainerExecution: b.fromContainerExecution
                        });
                    else if (xt.indexOf(kg(c.prefix)) !== -1) {
                        ch = !0;
                        Dt(a, b);
                        var k = {};
                        g((k[M.g.nb] = d,
                        k[M.g.yb] = e,
                        k), null);
                        Fi(d, function(l) {
                            J(function() {
                                e(l)
                            })
                        }, c.id, b)
                    }
                }
            }
        },
        js: function(a, b) {
            if (a.length === 2 && a[1].getTime) {
                zt = !0;
                var c = Dt(a, b)
                  , d = c.eventId
                  , e = c.priorityId
                  , f = {};
                return f.event = "gtm.js",
                f["gtm.start"] = a[1].getTime(),
                f["gtm.uniqueEventId"] = d,
                f["gtm.priorityId"] = e,
                f
            }
        },
        policy: function() {},
        set: function(a, b) {
            var c = void 0;
            a.length === 2 && Sa(a[1]) ? c = g(a[1], null) : a.length === 3 && h(a[1]) && (c = {},
            Sa(a[2]) || Array.isArray(a[2]) ? c[a[1]] = g(a[2], null) : c[a[1]] = a[2]);
            if (c) {
                var d = Dt(a, b)
                  , e = d.eventId
                  , f = d.priorityId;
                g(c, null);
                var k = g(c, null);
                Ei.push("set", [k], void 0, b);
                c["gtm.uniqueEventId"] = e;
                f && (c["gtm.priorityId"] = f);
                delete c.event;
                b.overwriteModelFields = !0;
                return c
            }
        }
    }
      , Kt = {
        policy: !0
    };
    var Mt = function(a) {
        if (Lt(a))
            return a;
        this.value = a
    };
    Mt.prototype.getUntrustedMessageValue = function() {
        return this.value
    }
    ;
    var Lt = function(a) {
        return !a || Qa(a) !== "object" || Sa(a) ? !1 : "getUntrustedMessageValue"in a
    };
    Mt.prototype.getUntrustedMessageValue = Mt.prototype.getUntrustedMessageValue;
    var Nt = !1
      , Ot = [];
    function Pt() {
        if (!Nt) {
            Nt = !0;
            for (var a = 0; a < Ot.length; a++)
                J(Ot[a])
        }
    }
    function Qt(a) {
        Nt ? J(a) : Ot.push(a)
    }
    ;var Rt = 0
      , St = {}
      , Tt = []
      , Ut = []
      , Vt = !1
      , Wt = !1;
    function Xt(a, b) {
        return a.messageContext.eventId - b.messageContext.eventId || a.messageContext.priorityId - b.messageContext.priorityId
    }
    var Yt = function(a) {
        E[Ge.ub].push(a)
    };
    function Zt(a, b) {
        var c = a._clear || b.overwriteModelFields;
        B(a, function(e, f) {
            e !== "_clear" && (c && lf(e),
            lf(e, f))
        });
        Ue || (Ue = a["gtm.start"]);
        var d = a["gtm.uniqueEventId"];
        if (!a.event)
            return !1;
        typeof d !== "number" && (d = Ye(),
        a["gtm.uniqueEventId"] = d,
        lf("gtm.uniqueEventId", d));
        return it(a)
    }
    function $t(a) {
        if (a == null || typeof a !== "object")
            return !1;
        if (a.event)
            return !0;
        if (nb(a)) {
            var b = a[0];
            if (b === "config" || b === "event" || b === "js" || b === "get")
                return !0
        }
        return !1
    }
    function au() {
        var a;
        if (Ut.length)
            a = Ut.shift();
        else if (Tt.length)
            a = Tt.shift();
        else
            return;
        var b;
        var c = a;
        if (Vt || !$t(c.message))
            b = c;
        else {
            Vt = !0;
            var d = c.message["gtm.uniqueEventId"];
            typeof d !== "number" && (d = c.message["gtm.uniqueEventId"] = Ye());
            var e = {}
              , f = {
                message: (e.event = "gtm.init_consent",
                e["gtm.uniqueEventId"] = d - 2,
                e),
                messageContext: {
                    eventId: d - 2
                }
            }
              , k = {}
              , l = {
                message: (k.event = "gtm.init",
                k["gtm.uniqueEventId"] = d - 1,
                k),
                messageContext: {
                    eventId: d - 1
                }
            };
            Tt.unshift(l, c);
            if (Pf) {
                if (!P(85)) {
                    var m = as();
                    m && $r.push(m)
                }
                Cg()
            }
            b = f
        }
        return b
    }
    function bu() {
        for (var a = !1, b; !Wt && (b = au()); ) {
            Wt = !0;
            delete ef.eventModel;
            gf();
            var c = b
              , d = c.message
              , e = c.messageContext;
            if (d == null)
                Wt = !1;
            else {
                if (e.fromContainerExecution)
                    for (var f = ["gtm.allowlist", "gtm.blocklist", "gtm.whitelist", "gtm.blacklist", "tagTypeBlacklist"], k = 0; k < f.length; k++) {
                        var l = f[k]
                          , m = hf(l, 1);
                        if (Array.isArray(m) || Sa(m))
                            m = g(m);
                        ff[l] = m
                    }
                try {
                    if (gb(d))
                        try {
                            d.call(jf)
                        } catch (z) {}
                    else if (Array.isArray(d)) {
                        var n = d;
                        if (h(n[0])) {
                            var p = n[0].split(".")
                              , q = p.pop()
                              , r = n.slice(1)
                              , t = hf(p.join("."), 2);
                            if (t != null)
                                try {
                                    t[q].apply(t, r)
                                } catch (z) {}
                        }
                    } else {
                        var u = void 0;
                        if (nb(d))
                            a: {
                                if (d.length && h(d[0])) {
                                    var v = Jt[d[0]];
                                    if (v && (!e.fromContainerExecution || !Kt[d[0]])) {
                                        u = v(d, e);
                                        break a
                                    }
                                }
                                u = void 0
                            }
                        else
                            u = d;
                        u && (a = Zt(u, e) || a)
                    }
                } finally {
                    e.fromContainerExecution && gf(!0);
                    var w = d["gtm.uniqueEventId"];
                    if (typeof w === "number") {
                        for (var x = St[String(w)] || [], y = 0; y < x.length; y++)
                            Ut.push(cu(x[y]));
                        x.length && Ut.sort(Xt);
                        delete St[String(w)];
                        w > Rt && (Rt = w)
                    }
                    Wt = !1
                }
            }
        }
        return !a
    }
    function du() {
        if (P(69)) {
            var a = eu();
        }
        var b = bu();
        if (P(69)) {}
        try {
            var c = eg()
              , d = E[Ge.ub].hide;
            if (d && d[c] !== void 0 && d.end) {
                d[c] = !1;
                var e = !0, f;
                for (f in d)
                    if (d.hasOwnProperty(f) && d[f] === !0) {
                        e = !1;
                        break
                    }
                e && (d.end(),
                d.end = null)
            }
        } catch (k) {}
        return b
    }
    function rt(a) {
        if (Rt < a.notBeforeEventId) {
            var b = String(a.notBeforeEventId);
            St[b] = St[b] || [];
            St[b].push(a)
        } else
            Ut.push(cu(a)),
            Ut.sort(Xt),
            J(function() {
                Wt || bu()
            })
    }
    function cu(a) {
        return {
            message: a.message,
            messageContext: a.messageContext
        }
    }
    var fu = function() {
        function a(f) {
            var k = {};
            if (Lt(f)) {
                var l = f;
                f = Lt(l) ? l.getUntrustedMessageValue() : void 0;
                k.fromContainerExecution = !0
            }
            return {
                message: f,
                messageContext: k
            }
        }
        var b = Sb(Ge.ub, [])
          , c = He[Ge.ub] = He[Ge.ub] || {};
        c.pruned === !0 && L(83);
        St = pt().get();
        qt();
        is(function() {
            if (!c.gtmDom) {
                c.gtmDom = !0;
                var f = {};
                b.push((f.event = "gtm.dom",
                f))
            }
        });
        Qt(function() {
            if (!c.gtmLoad) {
                c.gtmLoad = !0;
                var f = {};
                b.push((f.event = "gtm.load",
                f))
            }
        });
        c.subscribers = (c.subscribers || 0) + 1;
        var d = b.push;
        b.push = function() {
            var f;
            if (He.SANDBOXED_JS_SEMAPHORE > 0) {
                f = [];
                for (var k = 0; k < arguments.length; k++)
                    f[k] = new Mt(arguments[k])
            } else
                f = [].slice.call(arguments, 0);
            var l = f.map(function(q) {
                return a(q)
            });
            Tt.push.apply(Tt, l);
            var m = d.apply(b, f)
              , n = Math.max(100, Number("1000") || 300);
            if (this.length > n)
                for (L(4),
                c.pruned = !0; this.length > n; )
                    this.shift();
            var p = typeof m !== "boolean" || m;
            return bu() && p
        }
        ;
        var e = b.slice(0).map(function(f) {
            return a(f)
        });
        Tt.push.apply(Tt, e);
        if (eu()) {
            if (P(69)) {}
            J(du)
        }
    }
      , eu = function() {
        var a = !0;
        return a
    };
    function gu(a) {
        if (a == null || a.length === 0)
            return !1;
        var b = Number(a)
          , c = tb();
        return b < c + 3E5 && b > c - 9E5
    }
    ;var Bu = function() {};
    var Cu = function() {};
    Cu.prototype.toString = function() {
        return "undefined"
    }
    ;
    var Du = new Cu;
    function Ku(a, b) {
        function c(k) {
            var l = zf(k)
              , m = tf(l, "protocol")
              , n = tf(l, "host", !0)
              , p = tf(l, "port")
              , q = tf(l, "path").toLowerCase().replace(/\/$/, "");
            if (m === void 0 || m === "http" && p === "80" || m === "https" && p === "443")
                m = "web",
                p = "default";
            return [m, n, p, q]
        }
        for (var d = c(String(a)), e = c(String(b)), f = 0; f < d.length; f++)
            if (d[f] !== e[f])
                return !1;
        return !0
    }
    function Lu(a) {
        return Mu(a) ? 1 : 0
    }
    function Mu(a) {
        var b = a.arg0
          , c = a.arg1;
        if (a.any_of && Array.isArray(c)) {
            for (var d = 0; d < c.length; d++) {
                var e = g(a, {});
                g({
                    arg1: c[d],
                    any_of: void 0
                }, e);
                if (Lu(e))
                    return !0
            }
            return !1
        }
        switch (a["function"]) {
        case "_cn":
            return String(b).indexOf(String(c)) >= 0;
        case "_css":
            var f;
            a: {
                if (b)
                    try {
                        for (var k = 0; k < Bd.length; k++) {
                            var l = Bd[k];
                            if (b[l] != null) {
                                f = b[l](c);
                                break a
                            }
                        }
                    } catch (v) {}
                f = !1
            }
            return f;
        case "_ew":
            var m = String(b)
              , n = String(c)
              , p = m.length - n.length;
            return p >= 0 && m.indexOf(n, p) === p;
        case "_eq":
            return String(b) === String(c);
        case "_ge":
            return Number(b) >= Number(c);
        case "_gt":
            return Number(b) > Number(c);
        case "_lc":
            return String(b).split(",").indexOf(String(c)) >= 0;
        case "_le":
            return Number(b) <= Number(c);
        case "_lt":
            return Number(b) < Number(c);
        case "_re":
            var q;
            a: {
                var r = a.ignore_case ? "i" : void 0;
                try {
                    var t = String(c) + String(r)
                      , u = Cd.get(t);
                    u || (u = new RegExp(c,r),
                    Cd.set(t, u));
                    q = u.test(b);
                    break a
                } catch (v) {
                    q = !1;
                    break a
                }
            }
            return q;
        case "_sw":
            return yb(String(b), String(c));
        case "_um":
            return Ku(b, c)
        }
        return !1
    }
    ;function Nu() {
        var a;
        a = a === void 0 ? "" : a;
        var b, c;
        return ((b = data) == null ? 0 : (c = b.blob) == null ? 0 : c.hasOwnProperty(1)) ? String(data.blob[1]) : a
    }
    ;function Ou() {
        var a = [["cv", P(92) ? Nu() : "1"], ["rv", Ge.Ff], ["tc", Uc.filter(function(b) {
            return b
        }).length]];
        Ge.sd && a.push(["x", Ge.sd]);
        $e.m && a.push(["tag_exp", $e.m]);
        return a
    }
    ;var Pu = {}
      , Qu = {};
    function Ru() {
        var a = 0;
        return function(b) {
            switch (b) {
            case 1:
                a |= 1;
                break;
            case 2:
                a |= 2;
                break;
            case 3:
                a |= 4
            }
            return a
        }
    }
    function Su(a, b, c) {
        if (Of) {
            var d = String(c) + b;
            Pu[a] = Pu[a] || [];
            Pu[a].push(d);
            Qu[a] = Qu[a] || [];
            Qu[a].push("j" + b)
        }
    }
    function Tu(a) {
        var b = a.eventId
          , c = a.Ib
          , d = []
          , e = Pu[b] || [];
        e.length && d.push(["hf", e.join(".")]);
        var f = Qu[b] || [];
        f.length && d.push(["ht", f.join(".")]);
        c && (delete Pu[b],
        delete Qu[b]);
        return d
    }
    ;function fv(a) {
        var b = He.zones;
        return b ? b.getIsAllowedFn($f(), a) : function() {
            return !0
        }
    }
    function gv() {
        Lr(function(a) {
            var b = a.originalEventData["gtm.uniqueEventId"]
              , c = He.zones;
            return c ? c.isActive($f(), b) : !0
        });
        Jr(function(a) {
            var b, c;
            b = a.entityId;
            c = a.securityGroups;
            return fv(Number(a.originalEventData["gtm.uniqueEventId"]))(b, c)
        })
    }
    ;var hv = function(a, b, c) {
        this.eventName = b;
        this.j = c;
        this.o = {};
        this.isAborted = !1;
        this.target = a;
        this.metadata = g(c.eventMetadata || {}, {})
    };
    hv.prototype.copyToHitData = function(a, b, c) {
        var d = S(this.j, a);
        d === void 0 && (d = b);
        if (d !== void 0 && c !== void 0 && h(d) && P(63))
            try {
                d = c(d)
            } catch (e) {}
        d !== void 0 && (this.o[a] = d)
    }
    ;
    var Lo = function(a, b, c) {
        var d = Tn(a.target.da);
        return d && d[b] !== void 0 ? d[b] : c
    };
    function Tv() {
        return Ij(7) && Ij(9) && Ij(10)
    }
    ;lh();
    function Vw() {
        return E.gaGlobal = E.gaGlobal || {}
    }
    function Ww() {
        var a = Vw();
        a.hid = a.hid || kb();
        return a.hid
    }
    function Xw(a, b) {
        var c = Vw();
        if (c.vid === void 0 || b && !c.from_cookie)
            c.vid = a,
            c.from_cookie = b
    }
    ;function sx(a) {
        var b = P(60) && bf();
        if (Oo(a) || b)
            a.o[M.g.Gh] = ih() || hh["0"] || ""
    }
    ;var Ix = function(a) {
        this.D = a;
        this.F = "";
        this.m = this.D
    }
      , Jx = function(a, b) {
        a.m = b;
        return a
    }
      , Kx = function(a, b) {
        a.J = b;
        return a
    }
      , Mx = function(a, b) {
        b = a.F + b;
        for (var c = b.indexOf("\n\n"); c !== -1; ) {
            var d = a, e;
            a: {
                var f = la(b.substring(0, c).split("\n"))
                  , k = f.next().value
                  , l = f.next().value;
                if (k.indexOf("event: message") === 0 && l.indexOf("data: ") === 0)
                    try {
                        e = JSON.parse(l.substring(l.indexOf(":") + 1));
                        break a
                    } catch (x) {}
                e = void 0
            }
            var m = d
              , n = e;
            if (n) {
                Lx(n.send_pixel, n.options, m.D);
                Lx(n.send_beacon, void 0, m.m);
                var p = n.create_iframe
                  , q = n.options
                  , r = m.J;
                if (p && r) {
                    var t = p || [];
                    if (Array.isArray(t))
                        for (var u = Sa(q) ? q : {}, v = la(t), w = v.next(); !w.done; w = v.next())
                            r(w.value, u)
                }
            }
            b = b.substring(c + 2);
            c = b.indexOf("\n\n")
        }
        a.F = b
    };
    function Nx(a) {
        var b = a.search;
        return a.protocol + "//" + a.hostname + a.pathname + (b ? b + "&richsstsse" : "?richsstsse")
    }
    function Lx(a, b, c) {
        if (a) {
            var d = a || [];
            if (Array.isArray(d))
                for (var e = Sa(b) ? b : {}, f = la(d), k = f.next(); !k.done; k = f.next())
                    c(k.value, e)
        }
    }
    ;var yy = window
      , zy = document
      , Ay = function(a) {
        var b = yy._gaUserPrefs;
        if (b && b.ioo && b.ioo() || zy.documentElement.hasAttribute("data-google-analytics-opt-out") || a && yy["ga-disable-" + a] === !0)
            return !0;
        try {
            var c = yy.external;
            if (c && c._gaUserPrefs && c._gaUserPrefs == "oo")
                return !0
        } catch (p) {}
        for (var d = [], e = String(zy.cookie).split(";"), f = 0; f < e.length; f++) {
            var k = e[f].split("=")
              , l = k[0].replace(/^\s*|\s*$/g, "");
            if (l && l == "AMP_TOKEN") {
                var m = k.slice(1).join("=").replace(/^\s*|\s*$/g, "");
                m && (m = decodeURIComponent(m));
                d.push(m)
            }
        }
        for (var n = 0; n < d.length; n++)
            if (d[n] == "$OPT_OUT")
                return !0;
        return zy.getElementById("__gaOptOutExtension") ? !0 : !1
    };
    function Ly(a) {
        B(a, function(c) {
            c.charAt(0) === "_" && delete a[c]
        });
        var b = a[M.g.Wa] || {};
        B(b, function(c) {
            c.charAt(0) === "_" && delete b[c]
        })
    }
    var oz = function(a, b) {};
    function nz(a, b) {
        var c = function() {};
        return c
    }
    function pz(a, b, c) {}
    ;var qz = nz;
    var sz = encodeURI
      , W = encodeURIComponent
      , tz = Array.isArray
      , uz = function(a, b, c) {
        $b(a, b, c)
    }
      , vz = function(a, b) {
        if (!a)
            return !1;
        var c = tf(zf(a), "host");
        if (!c)
            return !1;
        for (var d = 0; b && d < b.length; d++) {
            var e = b[d] && b[d].toLowerCase();
            if (e) {
                var f = c.length - e.length;
                f > 0 && e.charAt(0) != "." && (f--,
                e = "." + e);
                if (f >= 0 && c.indexOf(e, f) == f)
                    return !0
            }
        }
        return !1
    }
      , wz = function(a, b, c) {
        for (var d = {}, e = !1, f = 0; a && f < a.length; f++)
            a[f] && a[f].hasOwnProperty(b) && a[f].hasOwnProperty(c) && (d[a[f][b]] = a[f][c],
            e = !0);
        return e ? d : null
    };
    var Fz = E.clearTimeout
      , Gz = E.setTimeout
      , Y = function(a, b, c) {
        if (Zj()) {
            b && J(b)
        } else
            return Xb(a, b, c)
    }
      , Hz = function() {
        return E.location.href
    }
      , Iz = function(a, b) {
        return hf(a, b || 2)
    }
      , Jz = function(a, b) {
        E[a] = b
    }
      , Kz = function(a, b, c) {
        b && (E[a] === void 0 || c && !E[a]) && (E[a] = b);
        return E[a]
    }
      , Lz = function(a, b) {
        if (Zj()) {
            b && J(b)
        } else
            Zb(a, b)
    };
    var Mz = {};
    var Z = {
        securityGroups: {}
    };

    Z.securityGroups.v = ["google"],
    Z.__v = function(a) {
        var b = a.vtp_name;
        if (!b || !b.replace)
            return !1;
        var c = Iz(b.replace(/\\\./g, "."), a.vtp_dataLayerVersion || 1);
        return c !== void 0 ? c : a.vtp_defaultValue
    }
    ,
    Z.__v.C = "v",
    Z.__v.isVendorTemplate = !0,
    Z.__v.priorityOverride = 0,
    Z.__v.isInfrastructure = !0,
    Z.__v.runInSiloedMode = !1;

    Z.securityGroups.get = ["google"],
    Z.__get = function(a) {
        var b = a.vtp_settings
          , c = b.eventParameters || {}
          , d = String(a.vtp_eventName)
          , e = {};
        e.eventId = a.vtp_gtmEventId;
        e.priorityId = a.vtp_gtmPriorityId;
        a.vtp_deferrable && (e.deferrable = !0);
        var f = mt(String(b.streamId), d, c);
        ot(f, e.eventId, e);
        a.vtp_gtmOnSuccess()
    }
    ,
    Z.__get.C = "get",
    Z.__get.isVendorTemplate = !0,
    Z.__get.priorityOverride = 0,
    Z.__get.isInfrastructure = !1,
    Z.__get.runInSiloedMode = !1;

    var Nz = {};
    Nz.dataLayer = jf;
    Nz.callback = function(a) {
        We.hasOwnProperty(a) && gb(We[a]) && We[a]();
        delete We[a]
    }
    ;
    Nz.bootstrap = 0;
    Nz._spx = !1;
    function Oz() {
        He[eg()] = He[eg()] || Nz;
        og();
        qg() || B(rg(), function(d, e) {
            Zr(d, e.transportUrl, e.context);
            L(92)
        });
        wb(Xe, Z.securityGroups);
        var a = ig(jg()), b, c = a == null ? void 0 : (b = a.context) == null ? void 0 : b.source;
        c !== 2 && c !== 4 && c !== 3 || L(142);
        ad = ld
    }
    var Pz = !1;
    (function(a) {
        function b() {
            n = H.documentElement.getAttribute("data-tag-assistant-present");
            gu(n) && (m = l.Lh)
        }
        function c() {
            m && Rb ? k(m) : a()
        }
        if (!E["__TAGGY_INSTALLED"]) {
            var d = !1;
            if (H.referrer) {
                var e = zf(H.referrer);
                d = vf(e, "host") === "cct.google"
            }
            if (!d) {
                var f = lk("googTaggyReferrer");
                d = !(!f.length || !f[0].length)
            }
            d && (E["__TAGGY_INSTALLED"] = !0,
            Xb("https://cct.google/taggy/agent.js"))
        }
        var k = function(u) {
            var v = "GTM"
              , w = "GTM";
            Me && (v = "OGT",
            w = "GTAG");
            var x = E["google.tagmanager.debugui2.queue"];
            x || (x = [],
            E["google.tagmanager.debugui2.queue"] = x,
            Xb("https://" + Ge.Kc + "/debug/bootstrap?id=" + Zf.ctid + "&src=" + w + "&cond=" + u + "&gtm=" + bk()));
            var y = {
                messageType: "CONTAINER_STARTING",
                data: {
                    scriptSource: Rb,
                    containerProduct: v,
                    debug: !1,
                    id: Zf.ctid,
                    targetRef: {
                        ctid: Zf.ctid,
                        isDestination: Xf.qd
                    },
                    aliases: ag(),
                    destinations: dg()
                }
            };
            y.data.resume = function() {
                a()
            }
            ;
            Ge.aj && (y.data.initialPublish = !0);
            x.push(y)
        }
          , l = {
            Rj: 1,
            Nh: 2,
            ei: 3,
            Hg: 4,
            Lh: 5
        };
        l[l.Rj] = "GTM_DEBUG_LEGACY_PARAM";
        l[l.Nh] = "GTM_DEBUG_PARAM";
        l[l.ei] = "REFERRER";
        l[l.Hg] = "COOKIE";
        l[l.Lh] = "EXTENSION_PARAM";
        var m = void 0
          , n = void 0
          , p = tf(E.location, "query", !1, void 0, "gtm_debug");
        gu(p) && (m = l.Nh);
        if (!m && H.referrer) {
            var q = zf(H.referrer);
            vf(q, "host") === "tagassistant.google.com" && (m = l.ei)
        }
        if (!m) {
            var r = lk("__TAG_ASSISTANT");
            r.length && r[0].length && (m = l.Hg)
        }
        m || b();
        if (!m && n && n.indexOf("pending:") === 0 && gu(n.substr(8))) {
            var t = !1;
            ac(H, "TADebugSignal", function() {
                t || (t = !0,
                b(),
                c())
            }, !1);
            E.setTimeout(function() {
                t || (t = !0,
                b(),
                c())
            }, 200)
        } else
            c()
    }
    )(function() {
        try {
            var a;
            if (!(a = !P(55))) {
                var b;
                if (!(b = Pz)) {
                    var c;
                    a: {
                        for (var d = Vf().injectedFirstPartyContainers, e = la($f()), f = e.next(); !f.done; f = e.next())
                            if (d[f.value]) {
                                c = !0;
                                break a
                            }
                        c = !1
                    }
                    b = !c
                }
                a = b
            }
            if (a) {
                mg();
                if (P(69)) {}
                Og().D();
                Bj();
                yh();
                var k = gg();
                if (Vf().canonical[k]) {
                    var l = He.zones;
                    l && l.unregisterChild($f());
                    Kr().removeExternalRestrictions(gg());
                } else {
                    a: {}
                    $e.m = "0";
                    $e.J = "";
                    $e.R = "ad_storage|analytics_storage|ad_user_data|ad_personalization";
                    $e.N = "ad_storage|analytics_storage|ad_user_data";
                    $e.sa = "";
                    Vr();
                    for (var m = data.resource || {}, n = m.macros || [], p = 0; p < n.length; p++)
                        Rc.push(n[p]);
                    for (var q = m.tags || [], r = 0; r < q.length; r++)
                        Uc.push(q[r]);
                    for (var t = m.predicates || [], u = 0; u < t.length; u++)
                        Tc.push(t[u]);
                    for (var v = m.rules || [], w = 0; w < v.length; w++) {
                        for (var x = v[w], y = {}, z = 0; z < x.length; z++) {
                            var A = x[z][0];
                            y[A] = Array.prototype.slice.call(x[z], 1);
                            A !== "if" && A !== "unless" || $c(y[A])
                        }
                        Sc.push(y)
                    }
                    Wc = Z;
                    Xc = Lu;
                    Oz();
                    if (!Re)
                        for (var C = hh["6"] !== !1 ? cf($e.N) : cf($e.R), G = 0; G < nh.length; G++) {
                            var D = nh[G]
                              , F = D
                              , K = C[D] ? "granted" : "denied";
                            Ig().implicit(F, K)
                        }
                    fu();
                    ds = !1;
                    es = 0;
                    if (H.readyState === "interactive" && !H.createEventObject || H.readyState === "complete")
                        gs();
                    else {
                        ac(H, "DOMContentLoaded", gs);
                        ac(H, "readystatechange", gs);
                        if (H.createEventObject && H.documentElement.doScroll) {
                            var I = !0;
                            try {
                                I = !E.frameElement
                            } catch (Wq) {}
                            I && hs()
                        }
                        ac(E, "load", gs)
                    }
                    Nt = !1;
                    H.readyState === "complete" ? Pt() : ac(E, "load", Pt);
                    Of && (mi(zi),
                    E.setInterval(yi, 864E5),
                    mi(Ou),
                    mi(Hs),
                    mi(xq),
                    mi(Ci),
                    mi(Tu),
                    mi(Ss),
                    mi(kp),
                    P(76) && (mi(Ms),
                    mi(Ns),
                    mi(Os)));
                    if (Pf) {
                        Gg();
                        Th();
                        cs();
                        var Q;
                        var V = ig(jg());
                        if (V) {
                            for (; V.parent; ) {
                                var X = ig(V.parent);
                                if (!X)
                                    break;
                                V = X
                            }
                            Q = V
                        } else
                            Q = void 0;
                        var O = Q;
                        if (!O)
                            L(144);
                        else if (O.canonicalContainerId) {
                            var ea;
                            a: {
                                if (O.scriptSource) {
                                    var da;
                                    try {
                                        var aa;
                                        da = (aa = mc()) == null ? void 0 : aa.getEntriesByType("resource")
                                    } catch (Wq) {}
                                    if (da) {
                                        for (var qa = {}, Da = 0; Da < da.length; ++Da) {
                                            var ta = da[Da]
                                              , Ba = ta.initiatorType;
                                            if (Ba === "script" && ta.name === O.scriptSource) {
                                                ea = {
                                                    Pl: Da,
                                                    Ql: qa
                                                };
                                                break a
                                            }
                                            qa[Ba] = 1 + (qa[Ba] || 0)
                                        }
                                        L(146)
                                    } else
                                        L(145)
                                }
                                ea = void 0
                            }
                            var Ja = ea;
                            Ja && (yg("rtg", String(O.canonicalContainerId)),
                            yg("rlo", String(Ja.Pl)),
                            yg("slo", String(Ja.Ql.script || "0")),
                            yg("hlo", O.htmlLoadOrder || "-1"),
                            yg("lst", String(O.loadScriptType || "0")))
                        }
                        var Kc;
                        var qc = hg();
                        if (qc) {
                            var Qe;
                            Kc = qc.canonicalContainerId || "_" + (qc.scriptContainerId || ((Qe = qc.destinations) == null ? void 0 : Qe[0]))
                        } else
                            Kc = void 0;
                        var Xq = Kc;
                        Xq && yg("pcid", Xq);
                        P(31) && (yg("bt", String($e.F ? 2 : Oe ? 1 : 0)),
                        yg("ct", String($e.F ? 0 : Oe ? 1 : Zj() ? 2 : 3)))
                    }
                    Bu();
                    gh(1);
                    gv();
                    Ve = tb();
                    Nz.bootstrap = Ve;
                    if (P(69)) {}
                }
            }
        } catch (Wq) {
            if (gh(4),
            Of) {
                var Qz = ti(!0, !0);
                $b(Qz)
            }
        }
    });

}
)()
