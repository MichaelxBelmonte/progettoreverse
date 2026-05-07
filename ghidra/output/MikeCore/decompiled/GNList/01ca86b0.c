// Function: FUN_01ca86b0
// Address: 01ca86b0
// Size: 1931 bytes
// Class: GNList
// String references:
//   "%@.%@.gids"
//   "%@.gids"


/* WARNING: Removing unreachable block (ram,0x01ca8d7e) */
/* WARNING: Removing unreachable block (ram,0x01ca8d8a) */
/* WARNING: Removing unreachable block (ram,0x01ca88fb) */
/* WARNING: Removing unreachable block (ram,0x01ca8907) */
/* WARNING: Removing unreachable block (ram,0x01ca8df3) */
/* WARNING: Removing unreachable block (ram,0x01ca8dff) */

void FUN_01ca86b0(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong *plVar6;
  int iVar7;
  longlong *unaff_RSI;
  undefined8 local_108;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    return;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if ((longlong *)*unaff_RSI != (longlong *)0x0) {
    local_68._0_4_ = (uint)local_68 & 0xffffff00;
    local_70 = (longlong *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = (longlong *)*unaff_RSI;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar4 = (longlong)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar7) break;
      local_70 = *(longlong **)(local_60[2] + 8 + lVar4 * 8);
      (**(code **)(*local_70 + 0x60))();
      plVar6 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01ca87f0;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_01ca87f0:
        local_38 = '\0';
        local_40 = plVar6;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
  }
  if (*(int *)((longlong)puVar3 + 0xc) == 0) goto LAB_01ca8e3b;
  FUN_00d23310();
  plVar6 = local_70;
  local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_68);
  pplVar5 = &local_40;
  if ((char)local_68 != '\0') {
    pplVar5 = &local_68;
  }
  *(undefined1 *)pplVar5 = 0;
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = plVar6;
  if (((char)local_40 == '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar6 + 0x18))();
  (**(code **)(*plVar6 + 0x5f0))();
  local_b8 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68._0_4_ = (uint)local_68 & 0xffffff00;
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_00d23310();
    plVar6 = local_70;
    pplVar5 = &local_68;
    if ((char)local_68 == '\0') {
      pplVar5 = &local_c8;
    }
    local_c8._0_1_ = (char)local_68;
    *(undefined1 *)pplVar5 = 0;
    if (((char)local_68 != '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    local_88 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_c8 != '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_88 != (longlong *)0x0) {
      FUN_00ce7000();
      plVar6 = local_70;
      if (((char)local_68 == '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar1 = local_88;
      if (*(int *)((longlong)puVar3 + 0xc) == 1) {
        (**(code **)(*local_90 + 0x388))();
        local_108 = CONCAT71(local_c8._1_7_,(char)local_c8);
        FUN_00083ea0(2,&local_108);
        FUN_00d8cb40();
        local_b0 = local_80;
        local_a8 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_a8 = '\x01';
        (**(code **)(*plVar6 + 0x400))();
        if (plVar6 == local_40) {
LAB_01ca8cb7:
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar6 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_01ca8cb7;
          }
          FUN_00d50b20();
          local_38 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_70 = (longlong *)&DAT_0253d630;
        if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
          FUN_00d50b20();
        }
        local_70 = &DAT_024c5048;
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (CONCAT71(local_c8._1_7_,(char)local_c8) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68._0_4_ = 1;
        local_70 = &DAT_024c5048;
        local_58 = local_58 & 0xffffffffffffff00;
        FUN_00d50b00();
        local_60 = plVar1;
        local_58 = CONCAT71(local_58._1_7_,1);
        FUN_00d8cb40();
        local_a0 = local_80;
        local_98 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_98 = '\x01';
        (**(code **)(*plVar6 + 0x400))();
        if (plVar6 == local_40) {
LAB_01ca8c31:
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar6 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_01ca8c31;
          }
          FUN_00d50b20();
          local_38 = '\0';
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_70 = &DAT_024c5048;
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar2 = FUN_00c91cf0();
      lVar4 = DAT_026fcec0;
      if (cVar2 != '\0') {
        if (DAT_026fcec0 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca93d0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01ca8e3b:
  FUN_00d50b20();
  return;
}


