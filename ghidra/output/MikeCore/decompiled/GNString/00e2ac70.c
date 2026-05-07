// Function: FUN_00e2ac70
// Address: 00e2ac70
// Size: 1498 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e2af8b) */
/* WARNING: Removing unreachable block (ram,0x00e2af9b) */
/* WARNING: Removing unreachable block (ram,0x00e2b155) */
/* WARNING: Removing unreachable block (ram,0x00e2b161) */
/* WARNING: Removing unreachable block (ram,0x00e2b04d) */
/* WARNING: Removing unreachable block (ram,0x00e2b059) */
/* WARNING: Removing unreachable block (ram,0x00e2b0ce) */
/* WARNING: Removing unreachable block (ram,0x00e2b0da) */

void FUN_00e2ac70(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong local_38;
  
  if (*param_2 != 0) {
    (**(code **)(*unaff_RDI + 0x388))();
    lVar2 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) goto LAB_00e2afc5;
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_68 == 0) goto LAB_00e2afc5;
    local_60 = '\0';
    local_68 = 0;
    local_38 = lVar2;
    local_58 = lVar2;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar4 = -local_50._4_4_;
        }
        else {
          iVar4 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar4 = 0;
        }
        local_50 = CONCAT44(iVar4,(int)local_50);
      }
      lVar2 = (longlong)(int)local_50;
      iVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar4);
      if (*(int *)(local_58 + 0xc) <= iVar4) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar2 * 8);
      FUN_00c81c60();
      plVar3 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e2adea;
        }
      }
      else if (local_a0 != (longlong *)0x0) {
LAB_00e2adea:
        local_98 = '\0';
        local_a0 = (longlong *)0x0;
        local_40 = plVar3;
        local_90 = plVar3;
        local_88 = 0xffffffff;
        local_80 = 0;
        local_88._4_4_ = 0;
        while( true ) {
          if (local_88._4_4_ != 0) {
            if (local_88._4_4_ < 1) {
              iVar4 = -local_88._4_4_;
            }
            else {
              iVar4 = (int)local_88 - local_88._4_4_;
              local_88 = CONCAT44(local_88._4_4_,iVar4);
              FUN_00d23690();
              local_80 = local_80 + local_88._4_4_;
              iVar4 = 0;
            }
            local_88 = CONCAT44(iVar4,(int)local_88);
          }
          lVar2 = (longlong)(int)local_88;
          iVar4 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,iVar4);
          if (*(int *)((longlong)local_90 + 0xc) <= iVar4) break;
          local_a0 = *(longlong **)(local_90[2] + 8 + lVar2 * 8);
          plVar3 = (longlong *)*param_2;
          FUN_00d76a90();
          local_78 = local_c0;
          local_70 = 0;
          if (local_b8 == '\0') {
            if (local_c0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b8 = '\0';
          }
          local_70 = '\x01';
          cVar1 = (**(code **)(*plVar3 + 0x50))();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          plVar3 = local_a0;
          lVar2 = DAT_02785c60;
          if (cVar1 != '\0') {
            if (DAT_02785c60 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar3 + 0x80))();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00559a70();
        FUN_00d50b20();
      }
    }
    FUN_00e2c740();
    FUN_00d50b20();
  }
LAB_00e2afc5:
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  lVar2 = DAT_02785c68;
  if (DAT_02785c68 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0277e650;
  if (*param_2 != 0) {
    if (DAT_0277e650 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027f38c0;
  if (*param_1 != 0) {
    if (DAT_027f38c0 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar2 = DAT_02785c70;
  if (DAT_02785c70 != 0) {
    FUN_00d50b00();
  }
  local_a8 = 0;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_c8 = '\0';
  local_d0 = plVar3;
  local_b0 = unaff_RDI;
  FUN_00d40470(&local_d0,&local_b0,3,3);
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


