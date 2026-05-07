// Function: FUN_00c880c0
// Address: 00c880c0
// Size: 598 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c882ab) */
/* WARNING: Removing unreachable block (ram,0x00c882b8) */

longlong * FUN_00c880c0(void)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d23310();
    local_40[0] = local_58[0];
    pcVar2 = local_40;
    if (local_58[0] != '\0') {
      pcVar2 = local_58;
    }
    *pcVar2 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d4efa0();
    lVar3 = local_50;
    local_38[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (1 < *(int *)(*unaff_RSI + 0xc)) {
      lVar4 = 1;
      do {
        FUN_00d4efa0();
        lVar1 = local_50;
        if (local_48[0] == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_00c87ef0();
        if (lVar3 == local_60) {
          if (((local_38[0] == '\0') && (lVar3 != 0)) && (local_58[0] != '\0')) goto LAB_00c8825a;
        }
        else {
          bVar5 = lVar3 != 0;
          lVar3 = local_60;
          if (local_58[0] == '\0') {
            pcVar2 = local_38;
            if (bVar5 && local_38[0] != '\0') {
              FUN_00d50b20();
              pcVar2 = local_38;
            }
          }
          else {
            if (bVar5 && local_38[0] != '\0') {
              FUN_00d50b20();
            }
LAB_00c8825a:
            local_38[0] = '\x01';
            pcVar2 = local_58;
          }
          *pcVar2 = '\0';
        }
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(*unaff_RSI + 0xc));
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38[0] == '\0') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *unaff_RDI = lVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


