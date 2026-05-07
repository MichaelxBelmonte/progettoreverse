// Function: FUN_006dd100
// Address: 006dd100
// Size: 958 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MDNotificationObserver"
//   "MUTrack"
//   "MDPropertyObserver"
//   "_isOutputSlot"
//   "_isDefaultSlot"
//   "_stereoItemCount"
//   "MUAudioIOConfiguration"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dd100(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001e3dc0();
  *unaff_RDI = &DAT_024f5bf0;
  unaff_RDI[2] = &DAT_024f66d8;
  unaff_RDI[0x39] = &DAT_024f6718;
  unaff_RDI[0x48] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd610();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  *(undefined1 *)(unaff_RDI + 0x49) = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027270a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02727070 = FUN_00452aa0();
        _DAT_02727068 = "_isOutputSlot";
        _DAT_02727078 = 0;
        _DAT_02727080 = 0x6200;
        _DAT_02727088 = "bool";
        _DAT_02727090 = 0;
        uRam0000000002727098 = 0;
        _DAT_027270a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x249) = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027270f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027270b8 = FUN_00452aa0();
        _DAT_027270b0 = "_isDefaultSlot";
        _DAT_027270c0 = 0;
        _DAT_027270c8 = 0x6200;
        _DAT_027270d0 = "bool";
        _DAT_027270d8 = 0;
        uRam00000000027270e0 = 0;
        _DAT_027270e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24c) = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02727138 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02727100 = FUN_00452aa0();
        _DAT_027270f8 = "_stereoItemCount";
        _DAT_02727108 = 0;
        _DAT_02727110 = 0x6900;
        _DAT_02727118 = "GNInt";
        _DAT_02727120 = 0;
        uRam0000000002727128 = 0;
        _DAT_02727130 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4a] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd700();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  unaff_RDI[0x4b] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd7f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioIOConfiguration");
  }
  unaff_RDI[0x4c] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd8e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}


