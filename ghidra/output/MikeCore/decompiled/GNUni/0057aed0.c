// Function: FUN_0057aed0
// Address: 0057aed0
// Size: 515 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MDInspector"
//   "MDInspectorViewController"
//   "_mode"
//   "MDWorkspaceModuleViewController"
//   "_inspectorPanels"
//   "MDInspectorModeFlags"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057aed0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001d34c0();
  *unaff_RDI = &DAT_024c0458;
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0057b180();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_inspectorPanels";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspectorViewController");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0057b270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceModuleViewController");
  }
  FUN_0057b360();
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0057b440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspector");
  }
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027101f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027101c0 = FUN_00017df0();
        _DAT_027101b8 = "_mode";
        _DAT_027101c8 = 0;
        _DAT_027101d0 = 0x6900;
        _DAT_027101d8 = "MDInspectorModeFlags";
        _DAT_027101e0 = 0;
        uRam00000000027101e8 = 0;
        _DAT_027101f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


