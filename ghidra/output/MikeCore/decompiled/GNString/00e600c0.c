// Function: FUN_00e600c0
// Address: 00e600c0
// Size: 5227 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00e60ee7) */
/* WARNING: Removing unreachable block (ram,0x00e60bdd) */
/* WARNING: Removing unreachable block (ram,0x00e60923) */
/* WARNING: Removing unreachable block (ram,0x00e60655) */
/* WARNING: Removing unreachable block (ram,0x00e60502) */
/* WARNING: Removing unreachable block (ram,0x00e607c6) */
/* WARNING: Removing unreachable block (ram,0x00e60a76) */
/* WARNING: Removing unreachable block (ram,0x00e60d58) */
/* WARNING: Removing unreachable block (ram,0x00e6103a) */
/* WARNING: Removing unreachable block (ram,0x00e60efa) */
/* WARNING: Removing unreachable block (ram,0x00e60bf0) */
/* WARNING: Removing unreachable block (ram,0x00e60936) */
/* WARNING: Removing unreachable block (ram,0x00e60668) */
/* WARNING: Removing unreachable block (ram,0x00e60515) */
/* WARNING: Removing unreachable block (ram,0x00e607d9) */
/* WARNING: Removing unreachable block (ram,0x00e60a89) */
/* WARNING: Removing unreachable block (ram,0x00e60d6b) */
/* WARNING: Removing unreachable block (ram,0x00e6104d) */
/* WARNING: Removing unreachable block (ram,0x00e60f0d) */
/* WARNING: Removing unreachable block (ram,0x00e60c03) */
/* WARNING: Removing unreachable block (ram,0x00e60949) */
/* WARNING: Removing unreachable block (ram,0x00e6067b) */
/* WARNING: Removing unreachable block (ram,0x00e60528) */
/* WARNING: Removing unreachable block (ram,0x00e607ec) */
/* WARNING: Removing unreachable block (ram,0x00e60a9c) */
/* WARNING: Removing unreachable block (ram,0x00e60d7e) */
/* WARNING: Removing unreachable block (ram,0x00e61060) */
/* WARNING: Removing unreachable block (ram,0x00e60873) */
/* WARNING: Removing unreachable block (ram,0x00e60702) */
/* WARNING: Removing unreachable block (ram,0x00e605af) */
/* WARNING: Removing unreachable block (ram,0x00e60e05) */
/* WARNING: Removing unreachable block (ram,0x00e60f94) */
/* WARNING: Removing unreachable block (ram,0x00e60c9e) */
/* WARNING: Removing unreachable block (ram,0x00e609e4) */
/* WARNING: Removing unreachable block (ram,0x00e60b37) */
/* WARNING: Removing unreachable block (ram,0x00e610fb) */
/* WARNING: Removing unreachable block (ram,0x00e60e2d) */
/* WARNING: Removing unreachable block (ram,0x00e60cb2) */
/* WARNING: Removing unreachable block (ram,0x00e609f8) */
/* WARNING: Removing unreachable block (ram,0x00e60b4b) */
/* WARNING: Removing unreachable block (ram,0x00e6110f) */
/* WARNING: Removing unreachable block (ram,0x00e60cc6) */
/* WARNING: Removing unreachable block (ram,0x00e605eb) */
/* WARNING: Removing unreachable block (ram,0x00e608af) */
/* WARNING: Removing unreachable block (ram,0x00e60a0c) */
/* WARNING: Removing unreachable block (ram,0x00e60e41) */
/* WARNING: Removing unreachable block (ram,0x00e61137) */
/* WARNING: Removing unreachable block (ram,0x00e60ff8) */
/* WARNING: Removing unreachable block (ram,0x00e60766) */
/* WARNING: Removing unreachable block (ram,0x00e60e69) */
/* WARNING: Removing unreachable block (ram,0x00e6114b) */
/* WARNING: Removing unreachable block (ram,0x00e60a46) */
/* WARNING: Removing unreachable block (ram,0x00e60d00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e600c0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (*unaff_RSI != 0) {
    local_60 = 0;
    local_68 = (longlong *)0x0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = *unaff_RSI;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar8 = -local_50._4_4_;
        }
        else {
          iVar8 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar8);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar8 = 0;
        }
        local_50 = CONCAT44(iVar8,(int)local_50);
      }
      lVar6 = (longlong)(int)local_50;
      iVar8 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar8);
      if (*(int *)(local_58 + 0xc) <= iVar8) break;
      local_108 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar6 * 8);
      local_100 = '\0';
      local_68 = local_108;
      uVar9 = FUN_000175c0(unaff_RDI,&local_108);
      plVar1 = local_78;
      if ((DAT_026fd0c0 == '\0') &&
         (iVar8 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_00, iVar8 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        uVar9 = ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar7 = &local_78;
        uVar9 = extraout_XMM0_Da;
        if (cVar4 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar1 == (longlong *)0x0) {
        local_f8 = local_68;
        local_f0 = '\0';
        FUN_000175c0(uVar9,&local_f8);
        plVar1 = local_78;
        FUN_00053ac0();
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar7 = &local_78;
          if (cVar4 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar7 + 1) = 0;
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x368))();
          plVar1 = local_b8;
          if (local_b0 == '\0') {
            if (local_b8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          local_78 = plVar1;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
        local_78 = plVar1;
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  local_68 = (longlong *)0x48476d4248673835;
  local_60 = 0x35;
  local_5f = 0x39;
  local_5e = 0x30;
  local_5d = 0x34;
  local_5c = 0x39;
  local_5b = 0x67;
  local_5a = 0x46;
  local_59 = 0x5a;
  local_58 = CONCAT17(local_58._7_1_,0x36424d433837);
  FUN_00d91a70(0x36,1);
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_68 = plVar1;
  local_60 = '\0';
  FUN_00d21140();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d9bb60();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_68 = plVar1;
  local_60 = '\0';
  FUN_00d21140();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar9 = FUN_00d23340();
  plVar1 = local_68;
  pplVar7 = (longlong **)&local_60;
  if (local_60 == '\0') {
    pplVar7 = &local_78;
  }
  local_78 = (longlong *)CONCAT71(local_78._1_7_,local_60);
  *(undefined1 *)pplVar7 = 0;
  if ((local_60 != '\0') && (plVar1 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  plVar2 = DAT_02787800;
  if ((char)local_78 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
      plVar2 = DAT_02787800;
    }
  }
  else {
    local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
  }
  DAT_02787800 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    uVar9 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = plVar2;
  uVar9 = FUN_00ca0840(uVar9,&local_68);
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  lVar6 = DAT_027d3890;
  local_e0 = '\0';
  local_e8 = puVar5;
  if (DAT_027d3890 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_d8 = lVar6;
  local_d0 = '\x01';
  FUN_00d95130(uVar9,&local_d8);
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = plVar1;
  local_c0 = '\0';
  uVar9 = FUN_00e43480();
  plVar3 = local_78;
  plVar2 = DAT_02787810;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
      plVar2 = DAT_02787810;
    }
  }
  else {
    local_70 = '\0';
  }
  DAT_02787810 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    uVar9 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = plVar2;
  FUN_00ca0840(uVar9,&local_68);
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


