// Reconstructed from MikeCore binary
// 30 methods, 0 fields
// WARNING: This is reverse-engineered pseudocode, not compilable C++

class OsSignatureMac {

    // ===== Methods (30) =====
    // @00abfd62 (2537 bytes, calls 13 functions)
    // str: ""Contents""
    // str: ""Info.plist""
    // str: ""Resources""
    void method_00abfd62(undefined1 (*param_1);

    // @00ab5284 (2253 bytes, calls 8 functions)
    // str: "", ""
    // str: ""issuerId=""
    // str: ""modDate=""
    void method_00ab5284(void *param_1);

    // @00ab7374 (2253 bytes, calls 32 functions)
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbin"
    // str: ""Could not allocate a dictionary with the architecture attribute.""
    // str: ""virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::st"
    void verify(string *param_1, string *param_2, undefined4 ****param_3, undefined4 ****param_4);

    // @00ac67c0 (2182 bytes, calls 17 functions)
    void method_00ac67c0(string *param_1, string *param_2);

    // @00ac86a0 (2100 bytes, calls 4 functions)
    // str: ""boost::filesystem::current_path""
    void method_00ac86a0(dword *param_1, undefined8 param_2);

    // @00ab8a5c (1829 bytes, calls 25 functions)
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbin"
    // str: ""CFArrayGetValueAtIndex returned no certificate data at index %d.""
    // str: ""pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDicti"
    void digestSecCodeCertChain(undefined8 param_1);

    // @00abc51d (1750 bytes, calls 7 functions)
    void method_00abc51d(undefined8 param_1, undefined8 *param_2);

    // @00abac24 (1750 bytes, calls 6 functions)
    void method_00abac24(undefined8 param_1, undefined8 param_2, undefined8 *param_3);

    // @00ab804a (1134 bytes, calls 11 functions)
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbin"
    // str: ""What? We should always find a signing certificate chain.""
    // str: ""virtual pace::SharedSignedDigest_T pace::OsSignatureMac::computeMatchingDigestF"
    void computeMatchingDigestForVerify(string *param_1, string *param_2, size_t param_3);

    // @00ab6efc (1063 bytes, calls 14 functions)
    // str: ""OsSignatureMac::getAllCdHashes - Could not get the kSecCodeInfoDigestAlgorithms"
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbin"
    // str: ""void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)""
    void getAllCdHashes(longlong *param_1, undefined8 param_2, undefined8 **param_3);

    // @00abe77b (1030 bytes, calls 12 functions)
    // str: ""What? We got a zero MAC address!""
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpac"
    // str: ""vector<uint8_t> pace::GetPrimaryMACAddress()""
    void method_00abe77b(undefined8 param_1);

    // @00abcd74 (1013 bytes, calls 3 functions)
    void method_00abcd74(undefined8 *param_1, longlong param_2);

    // @00aba092 (923 bytes, calls 6 functions)
    void method_00aba092(undefined8 param_1, undefined8 param_2, size_t param_3);

    // @00abd489 (900 bytes, calls 4 functions)
    void method_00abd489(longlong param_1, longlong param_2, longlong param_3, undefined8 *param_4);

    // @00ac0de2 (825 bytes, calls 7 functions)
    // str: ""The image is too small to be a valid Mach-O binary: %ld""
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpac"
    // str: ""void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)""
    void method_00ac0de2(void *param_1, undefined8 param_2, size_t param_3);

    // @00ac71d0 (788 bytes, calls 3 functions)
    void method_00ac71d0(ulong param_1, int *param_2);

    // @00ac92d0 (775 bytes, calls 3 functions)
    void method_00ac92d0(undefined8 param_1, int *param_2);

    // @00ab85e2 (741 bytes, calls 3 functions)
    void method_00ab85e2(longlong param_1, int param_2);

    // @00abf8bb (739 bytes, calls 10 functions)
    // str: "".framework""
    // str: ""Versions""
    void method_00abf8bb(void);

    // @00ab4f34 (727 bytes, calls 4 functions)
    void method_00ab4f34(undefined8 param_1, string *param_2);

    // @00ab628a (725 bytes, calls 10 functions)
    void method_00ab628a(string *param_1, string *param_2, byte *param_3, byte *param_4);

    // @00ab5dcc (693 bytes, calls 7 functions)
    void method_00ab5dcc(void);

    // @00abd1ab (683 bytes, calls 4 functions)
    void method_00abd1ab(longlong param_1, longlong param_2, undefined8 *param_3);

    // @00ab94d4 (605 bytes, calls 8 functions)
    void method_00ab94d4(ulong param_1);

    // @00ab7e04 (545 bytes, calls 8 functions)
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbin"
    // str: ""Result code from SecCodeCopySigningInformation: %ld""
    // str: ""bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, cons"
    void getSigningInfoIfValid(undefined1 *param_1, undefined8 param_2, undefined2 *param_3);

    // @00ac099f (544 bytes, calls 12 functions)
    // str: ""Got a NULL from realpath and this path string: \"%s\"""
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpac"
    // str: ""boost::filesystem::path pace::getFrameworkCurrentBinaryParentPath(const boost::"
    void method_00ac099f(char *param_1, string *param_2);

    // @00ab9278 (543 bytes, calls 10 functions)
    void method_00ab9278(longlong *param_1, string *param_2);

    // @00ac1416 (533 bytes, calls 6 functions)
    // str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpac"
    // str: ""The index specified (%ld) is beyond the number of images in the binary (%ld).""
    // str: ""void *pace::SimpleMachOBinary::getIndImage(const uint32_t, uint32_t *, cpu_type"
    void method_00ac1416(undefined4 *param_1, undefined4 *param_2, undefined1 *param_3, uint *param_4);

    // @00abeec2 (525 bytes, calls 2 functions)
    // str: ""i386""
    // str: ""x86_64""
    // str: ""arm64""
    void method_00abeec2(locale *param_1, undefined8 param_2, undefined8 param_3, ulong param_4);

    // @00aca130 (500 bytes, calls 3 functions)
    void method_00aca130(undefined8 param_1, undefined8 param_2, size_t param_3);

};