// Function: FUN_010d7b20
// Address: 010d7b20
// Size: 551 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUTrack"
//   "MUAudioIOSlot"
//   "_generator"
//   "MUMidiIOSlot"


/* WARNING: Removing unreachable block (ram,0x010d7d18) */
/* WARNING: Removing unreachable block (ram,0x010d7cec) */
/* WARNING: Removing unreachable block (ram,0x010d7cfa) */
/* WARNING: Removing unreachable block (ram,0x010d7d26) */

void FUN_010d7b20(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_0114b5b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010dd560();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    lVar2 = FUN_0015ef90();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_010f6740();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "_generator";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUTrack");
    }
    lVar2 = FUN_0114b5b0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_0114b7f0();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUAudioIOSlot");
    }
    lVar2 = FUN_0114b5b0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_0114b8e0();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUMidiIOSlot");
    }
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}


