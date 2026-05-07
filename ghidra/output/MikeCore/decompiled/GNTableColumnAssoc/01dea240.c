// Function: FUN_01dea240
// Address: 01dea240
// Size: 950 bytes
// Class: GNTableColumnAssoc


/* WARNING: Removing unreachable block (ram,0x01dea56f) */
/* WARNING: Removing unreachable block (ram,0x01dea578) */
/* WARNING: Removing unreachable block (ram,0x01dea3e6) */
/* WARNING: Removing unreachable block (ram,0x01dea3f2) */
/* WARNING: Removing unreachable block (ram,0x01dea4f8) */
/* WARNING: Removing unreachable block (ram,0x01dea504) */
/* WARNING: Removing unreachable block (ram,0x01dea5b8) */
/* WARNING: Removing unreachable block (ram,0x01dea5c1) */
/* WARNING: Removing unreachable block (ram,0x01dea36c) */
/* WARNING: Removing unreachable block (ram,0x01dea375) */
/* WARNING: Removing unreachable block (ram,0x01dea2a4) */
/* WARNING: Removing unreachable block (ram,0x01dea2ad) */
/* WARNING: Removing unreachable block (ram,0x01dea4a5) */
/* WARNING: Removing unreachable block (ram,0x01dea4b2) */
/* WARNING: Removing unreachable block (ram,0x01dea467) */
/* WARNING: Removing unreachable block (ram,0x01dea474) */

void FUN_01dea240(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  int local_44;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x548))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  lVar4 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01dea5dd;
  if (*param_2 == 0) {
LAB_01dea592:
    iVar3 = FUN_01dcc980();
    if (iVar3 != -1) {
      FUN_01dd0010();
    }
  }
  else {
    if (*param_1 == 0) {
      FUN_01d25cb0();
      local_44 = FUN_00d23d20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d25cb0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (*(int *)(local_40 + 0xc) < 1) {
        local_44 = -1;
      }
      else {
        local_44 = -1;
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(local_40 + 0x10) + lVar4 * 8);
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x98))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          bVar2 = true;
          if (local_40 == *param_2) {
            if (local_44 == -1) {
              local_44 = (int)lVar4;
            }
            else {
              local_44 = -1;
              bVar2 = false;
            }
          }
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (!bVar2) {
            if (local_40 == 0) goto LAB_01dea540;
            break;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(local_40 + 0xc));
      }
      FUN_00d50b20();
    }
LAB_01dea540:
    if (local_44 == -1) goto LAB_01dea592;
    iVar3 = FUN_01dcc980();
    if (iVar3 != -1) {
      FUN_01dd0280();
    }
  }
  FUN_00d50b20();
LAB_01dea5dd:
  FUN_00d50b20();
  return;
}


