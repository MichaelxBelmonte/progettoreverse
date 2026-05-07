// Function: FUN_0074ddb0
// Address: 0074ddb0
// Size: 1762 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x0074de5b) */
/* WARNING: Removing unreachable block (ram,0x0074df8b) */

void FUN_0074ddb0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  local_a0 = 0;
  lVar4 = unaff_RDI[0x24];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar4;
  FUN_0074e990();
  plVar2 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_48 = plVar2;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)((longlong)local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
      FUN_00e34b50();
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
    }
    FUN_00097c40();
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_48 = plVar2;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)((longlong)local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
      FUN_0074ea80(local_48[2],1);
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
    }
    FUN_00097c40();
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar5) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
      FUN_00e34b70();
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
    }
    FUN_00097c40();
  }
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_f8 = 0;
  local_f0 = '\0';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_00d41040(&local_e8,&local_f8);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  plVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01f27fe0();
    (**(code **)(unaff_RDI[10] + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if (unaff_RDI + 10 != (longlong *)0x0) {
      (**(code **)(unaff_RDI[10] + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00751820();
  if (unaff_RDI[0x12] != 0) {
    pplVar6 = &local_58;
    FUN_01f27fe0();
    plVar1 = local_58;
    FUN_003708c0();
    if (plVar1 == (longlong *)0x0) {
LAB_0074e1b9:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0074e1b9;
    }
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x7b0))();
      lVar4 = unaff_RDI[0x12];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01257b00();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x370))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d403d0();
      lVar4 = unaff_RDI[0x12];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_d8 = 0;
      local_d0 = '\0';
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d41040(&local_c8,&local_d8);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[0x12] != 0) {
      unaff_RDI[0x12] = 0;
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x498))();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_0074e474;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_0074e474;
  local_b0 = '\0';
  local_b8 = 0;
  (**(code **)(*unaff_RDI + 0x490))();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x628))();
  if (local_58 == (longlong *)0x0) {
LAB_0074e464:
    FUN_00d50130();
  }
  else {
    cVar3 = FUN_00751ba0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_0074e464;
  }
  FUN_00d50b20();
LAB_0074e474:
  FUN_00d50550();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


