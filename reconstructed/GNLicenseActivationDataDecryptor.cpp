// Reconstructed implementation of GNLicenseActivationDataDecryptor
// From MikeCore binary — reverse-engineered pseudocode

#include "GNLicenseActivationDataDecryptor.h"

// ============================================================
// @00009570 — 825 bytes
// str: ""Melodyne""
// str: ""GNLicenseActivationDataDecryptor""
// str: ""GNLicenseILokProcessor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009570(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000067e0();
  unaff_RDI[0x20] = &DAT_024bfcd8;
  if (DAT_02788a40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cb9c0 = "GNLicenseActivationDataDecryptor";
      DAT_026cb9d0 = 0;
      _DAT_026cb9c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0x21] = &DAT_024bfd08;
  if (DAT_0270dd70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cb9e0 = "GNLicenseILokProcessor";
      DAT_026cb9f0 = 0;
      _DAT_026cb9e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024d9fc0;
  unaff_RDI[2] = &DAT_024da780;
  unaff_RDI[0x20] = &DAT_024da7c8;
  unaff_RDI[0x21] = &DAT_024da7f8;
  FUN_000099c0();
  FUN_00009cb0();
  *(undefined1 *)(unaff_RDI + 0x24) = 0;
  if (DAT_026cb2e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027265d8 = FUN_00005bb0();
      _DAT_027265c0 = "Melodyne";
      _DAT_027265c8 = 0x148;
      _DAT_027265d0 = FUN_00005b80;
      _DAT_027265e0 = 0;
      uRam00000000027265e8 = 0;
      _DAT_027265f0 = 0;
      uRam00000000027265f8 = 0;
      _DAT_02726600 = 0;
      uRam0000000002726608 = 0;
      _DAT_02726610 = 0;
      uRam0000000002726618 = 0;
      _DAT_02726620 = 0;
      uRam0000000002726628 = 0;
      _DAT_02726630 = 0;
      uRam0000000002726638 = 0;
      _DAT_02726640 = 0;
      uRam0000000002726648 = 0;
      _DAT_02726650 = 0;
      uRam0000000002726658 = 0;
      _DAT_02726660 = 0;
      uRam0000000002726668 = 0;
      _DAT_02726670 = 0;
      _uRam0000000002726678 = 0;
      _DAT_02726680 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272667b == '\0') {
    FUN_00009f30();
    FUN_00e87980();
  }
  FUN_0000a0a0();
  FUN_0000a390();
  FUN_0000a680();
  unaff_RDI[0x28] = 0;
  if (DAT_026cb2e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027265d8 = FUN_00005bb0();
      _DAT_027265c0 = "Melodyne";
      _DAT_027265c8 = 0x148;
      _DAT_027265d0 = FUN_00005b80;
      _DAT_027265e0 = 0;
      uRam00000000027265e8 = 0;
      _DAT_027265f0 = 0;
      uRam00000000027265f8 = 0;
      _DAT_02726600 = 0;
      uRam0000000002726608 = 0;
      _DAT_02726610 = 0;
      uRam0000000002726618 = 0;
      _DAT_02726620 = 0;
      uRam0000000002726628 = 0;
      _DAT_02726630 = 0;
      uRam0000000002726638 = 0;
      _DAT_02726640 = 0;
      uRam0000000002726648 = 0;
      _DAT_02726650 = 0;
      uRam0000000002726658 = 0;
      _DAT_02726660 = 0;
      uRam0000000002726668 = 0;
      _DAT_02726670 = 0;
      _uRam0000000002726678 = 0;
      _DAT_02726680 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272667b == '\0') {
    FUN_0000a970();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0056c060 — 512 bytes
// str: ""GNLicenseActivationDataDecryptor""
// str: ""GNLicenseContext""
// str: ""_activationDataDecryptor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0056c060(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0270dd10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02788990 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0270dbb8 = FUN_00d4fe50();
          _DAT_0270dba0 = "GNLicenseContext";
          _DAT_0270dba8 = 0x58;
          _DAT_0270dbb0 = FUN_0056b2b0;
          _DAT_0270dbc0 = 0;
          uRam000000000270dbc8 = 0;
          _DAT_0270dbd0 = 0;
          _DAT_0270dc48 = 0;
          uRam000000000270dc50 = 0;
          _DAT_0270dc58 = 0;
          DAT_0270dc5a = 2;
          _DAT_0270dbd8 = 0;
          uRam000000000270dbe0 = 0;
          _DAT_0270dbe8 = 0;
          uRam000000000270dbf0 = 0;
          _DAT_0270dbf8 = 0;
          uRam000000000270dc00 = 0;
          _DAT_0270dc08 = 0;
          uRam000000000270dc10 = 0;
          _DAT_0270dc18 = 0;
          uRam000000000270dc20 = 0;
          _DAT_0270dc28 = 0;
          uRam000000000270dc30 = 0;
          _DAT_0270dc38 = 0;
          uRam000000000270dc40 = 0;
          DAT_0270dc63 = 0;
          _DAT_0270dc5b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_02788a08 = (iVar1 != 0) << 6 | 0x80;
      _DAT_027889f0 = "_activationDataDecryptor";
      _DAT_027889f8 = &DAT_0270dba0;
      _DAT_02788a00 = 0;
      _DAT_02788a10 = 0;
      uRam0000000002788a18 = 0;
      _DAT_02788a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02788a30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02788a40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026cb9c0 = "GNLicenseActivationDataDecryptor";
          DAT_026cb9d0 = 0;
          _DAT_026cb9c8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_027889f0;
}



