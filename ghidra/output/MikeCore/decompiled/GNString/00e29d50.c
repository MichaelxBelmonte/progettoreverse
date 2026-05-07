// Function: FUN_00e29d50
// Address: 00e29d50
// Size: 2111 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e2a391) */
/* WARNING: Removing unreachable block (ram,0x00e2a39d) */
/* WARNING: Removing unreachable block (ram,0x00e2a1ab) */
/* WARNING: Removing unreachable block (ram,0x00e2a1b7) */
/* WARNING: Removing unreachable block (ram,0x00e29f9e) */
/* WARNING: Removing unreachable block (ram,0x00e29faa) */
/* WARNING: Removing unreachable block (ram,0x00e2a416) */
/* WARNING: Removing unreachable block (ram,0x00e2a422) */
/* WARNING: Removing unreachable block (ram,0x00e2a49e) */
/* WARNING: Removing unreachable block (ram,0x00e2a4aa) */
/* WARNING: Removing unreachable block (ram,0x00e2a2df) */
/* WARNING: Removing unreachable block (ram,0x00e2a2ef) */

void FUN_00e29d50(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *unaff_RDI;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  
  (**(code **)(*unaff_RDI + 0x388))();
  local_38 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if ((*param_2 != 0) && (local_38 != (longlong *)0x0)) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_38;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar5 = -local_50._4_4_;
        }
        else {
          iVar5 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar5);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar5 = 0;
        }
        local_50 = CONCAT44(iVar5,(int)local_50);
      }
      lVar3 = (longlong)(int)local_50;
      iVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar5) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar3 * 8);
      plVar4 = (longlong *)*param_2;
      FUN_00c7e7e0();
      plVar1 = local_a0;
      local_c8 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = plVar1;
      cVar2 = (**(code **)(*plVar4 + 0x50))();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar4 = local_68;
      lVar3 = DAT_02785c40;
      if (cVar2 != '\0') {
        if (DAT_02785c40 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar4 + 0x80))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00c81c60();
      plVar4 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e2a00e;
        }
      }
      else if (local_a0 != (longlong *)0x0) {
LAB_00e2a00e:
        local_98 = '\0';
        local_a0 = (longlong *)0x0;
        local_40 = plVar4;
        local_90 = plVar4;
        local_88 = 0xffffffff;
        local_80 = 0;
        local_88._4_4_ = 0;
        while( true ) {
          if (local_88._4_4_ != 0) {
            if (local_88._4_4_ < 1) {
              iVar5 = -local_88._4_4_;
            }
            else {
              iVar5 = (int)local_88 - local_88._4_4_;
              local_88 = CONCAT44(local_88._4_4_,iVar5);
              FUN_00d23690();
              local_80 = local_80 + local_88._4_4_;
              iVar5 = 0;
            }
            local_88 = CONCAT44(iVar5,(int)local_88);
          }
          lVar3 = (longlong)(int)local_88;
          iVar5 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,iVar5);
          if (*(int *)((longlong)local_90 + 0xc) <= iVar5) break;
          local_a0 = *(longlong **)(local_90[2] + 8 + lVar3 * 8);
          plVar4 = (longlong *)*param_2;
          FUN_00d76ac0();
          local_c0 = local_78;
          local_b8 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_b8 = '\x01';
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          plVar4 = local_a0;
          lVar3 = DAT_02785c48;
          if (cVar2 != '\0') {
            if (DAT_02785c48 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar4 + 0x80))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          plVar4 = (longlong *)*param_2;
          FUN_00d76b90();
          local_b0 = local_78;
          local_a8 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_a8 = '\x01';
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          plVar4 = local_a0;
          lVar3 = DAT_02785c50;
          if (cVar2 != '\0') {
            if (DAT_02785c50 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar4 + 0x80))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00559a70();
        FUN_00d50b20();
      }
    }
    FUN_00e2c740();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar3 = DAT_02785c58;
  if (DAT_02785c58 != 0) {
    FUN_00d50b00();
  }
  local_68 = (longlong *)lVar3;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar1 = local_38;
  lVar3 = DAT_0277e650;
  if (*param_2 != 0) {
    if (DAT_0277e650 != 0) {
      FUN_00d50b00();
    }
    local_68 = (longlong *)lVar3;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027f38c0;
  if (*param_1 != 0) {
    if (DAT_027f38c0 != 0) {
      FUN_00d50b00();
    }
    local_68 = (longlong *)lVar3;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar3 = DAT_027f3858;
  if (DAT_027f3858 != 0) {
    FUN_00d50b00();
  }
  local_d8 = 0;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e8 = '\0';
  local_f0 = plVar4;
  local_e0 = unaff_RDI;
  FUN_00d40470(&local_f0,&local_e0,3,3);
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


