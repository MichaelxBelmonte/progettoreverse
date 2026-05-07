// Function: FUN_00ce07a0
// Address: 00ce07a0
// Size: 684 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce09e1) */
/* WARNING: Removing unreachable block (ram,0x00ce09ea) */
/* WARNING: Removing unreachable block (ram,0x00ce088c) */
/* WARNING: Removing unreachable block (ram,0x00ce0895) */
/* WARNING: Removing unreachable block (ram,0x00ce09cd) */
/* WARNING: Removing unreachable block (ram,0x00ce09d6) */

void FUN_00ce07a0(char *param_1,undefined8 param_2,size_t param_3)

{
  bool bVar1;
  char cVar2;
  ssize_t sVar3;
  longlong lVar4;
  int extraout_var;
  int extraout_var_00;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  dword *pdVar7;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  char *pcVar5;
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00cde020();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  iVar6 = 100;
  lVar4 = FUN_00e83010();
  pdVar7 = &segment_command_00000020.flags;
  sVar3 = _readlink(param_1,(char *)&segment_command_00000020.flags,param_3);
  pcVar5 = (char *)CONCAT44(extraout_var,sVar3);
  if (pcVar5 != (char *)0x0 && -1 < extraout_var) {
    do {
      if ((longlong)pcVar5 < (longlong)pdVar7) {
        pcVar5[lVar4] = '\0';
        FUN_00d93290(pcVar5,6);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        lVar4 = DAT_02704060;
        if (DAT_02704060 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00d90870();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          (**(code **)(*unaff_RSI + 0x3f0))();
          (**(code **)(*local_50 + 0x400))();
          if (local_40 == 0) {
            bVar1 = false;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
          }
          else {
            bVar1 = true;
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d93290();
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00cddf30();
          if (local_40 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
          }
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00ce0a10;
      }
      iVar6 = iVar6 * 2;
      lVar4 = FUN_00e83060();
      pdVar7 = (dword *)(longlong)iVar6;
      sVar3 = _readlink(pcVar5,(char *)pdVar7,param_3);
      pcVar5 = (char *)CONCAT44(extraout_var_00,sVar3);
    } while (pcVar5 != (char *)0x0 && -1 < extraout_var_00);
  }
  bVar1 = false;
  local_40 = 0;
LAB_00ce0a10:
  FUN_00e83070();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


