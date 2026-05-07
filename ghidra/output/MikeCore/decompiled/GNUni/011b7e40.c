// Function: FUN_011b7e40
// Address: 011b7e40
// Size: 1940 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNInt"
//   "MUTagAttributeOptionType"
//   "_wikipediaPageId"
//   "_orderindex"
//   "_searchConfigIndex"
//   "_requiredOptions"
//   "MUTagAttributeOption"
//   "_usageCount"
//   "_subOptions"
//   "_superOption"
//   "_options"
//   "_requiredByOptions"
//   "MUTagAttributeOptionSubstitution"
//   "_instrumentTypeMask"
//   "MULoopInstrumentTypeMask"
//   "_spellings"
//   "_mainSpelling"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b7e40(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_0260a060;
  FUN_011b88c0();
  FUN_011b89a0();
  FUN_011b8a80();
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8b60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_superOption";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8c50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_subOptions";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8d40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_options";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOptionType");
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b4098 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b4060 = FUN_011b7780();
        _DAT_027b4058 = "_orderindex";
        _DAT_027b4068 = 0;
        _DAT_027b4070 = 0x6900;
        _DAT_027b4078 = "GNInt";
        _DAT_027b4080 = 0;
        uRam00000000027b4088 = 0;
        _DAT_027b4090 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b40e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b40a8 = FUN_011b7780();
        _DAT_027b40a0 = "_searchConfigIndex";
        _DAT_027b40b0 = 0;
        _DAT_027b40b8 = 0x6900;
        _DAT_027b40c0 = "GNInt";
        _DAT_027b40c8 = 0;
        uRam00000000027b40d0 = 0;
        _DAT_027b40d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8e30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_requiredOptions";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8f20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_requiredByOptions";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9010();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9100();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b4248 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b4210 = FUN_011b7780();
        _DAT_027b4208 = "_wikipediaPageId";
        _DAT_027b4218 = 0;
        _DAT_027b4220 = 0x6900;
        _DAT_027b4228 = "GNInt";
        _DAT_027b4230 = 0;
        uRam00000000027b4238 = 0;
        _DAT_027b4240 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011b91f0();
  FUN_011b92d0();
  FUN_011b93b0();
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOptionSubstitution");
  }
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b43b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b4378 = FUN_011b7780();
        _DAT_027b4370 = "_instrumentTypeMask";
        _DAT_027b4380 = 0;
        _DAT_027b4388 = 0x6901;
        _DAT_027b4390 = "MULoopInstrumentTypeMask";
        _DAT_027b4398 = 0;
        uRam00000000027b43a0 = 0;
        _DAT_027b43a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_mainSpelling";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_spellings";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(undefined4 *)(unaff_RDI + 0x1b) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b4488 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b4450 = FUN_011b7780();
        _DAT_027b4448 = "_usageCount";
        _DAT_027b4458 = 0;
        _DAT_027b4460 = 0x6901;
        _DAT_027b4468 = "GNInt";
        _DAT_027b4470 = 0;
        uRam00000000027b4478 = 0;
        _DAT_027b4480 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


