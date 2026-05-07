// Function: FUN_01689980
// Address: 01689980
// Size: 526 bytes
// Class: GNAudioProcessor
// String references:
//   "false && \"playback region still in use by playback plug-in extension!\""
//   "false && \"playback region still in use by preview plug-in extension!\""


/* WARNING: Removing unreachable block (ram,0x01689b48) */
/* WARNING: Removing unreachable block (ram,0x01689b51) */
/* WARNING: Removing unreachable block (ram,0x01689a6e) */
/* WARNING: Removing unreachable block (ram,0x01689a77) */
/* WARNING: Removing unreachable block (ram,0x016899f7) */
/* WARNING: Removing unreachable block (ram,0x01689a20) */
/* WARNING: Removing unreachable block (ram,0x016899f9) */
/* WARNING: Removing unreachable block (ram,0x01689a22) */

void FUN_01689980(void)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_RDI;
  int iVar3;
  int local_60;
  longlong local_50;
  char local_48;
  
  cVar2 = FUN_016be350();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != 0) {
      local_60 = -1;
      while (local_60 = local_60 + 1, local_60 < *(int *)(lVar1 + 0xc)) {
        FUN_0168e8e0();
        cVar2 = FUN_00d24090();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_016aea20();
          FUN_00e82970();
        }
      }
      FUN_016be7c0();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar3 = 0;
        do {
          FUN_0168fda0();
          cVar2 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_016aea20();
            FUN_00e82970();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar1 + 0xc));
      }
      FUN_016be7c0();
    }
  }
  return;
}


