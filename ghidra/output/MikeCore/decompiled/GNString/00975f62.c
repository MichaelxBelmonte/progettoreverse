// Function: FUN_00975f62
// Address: 00975f62
// Size: 1745 bytes
// Class: GNString


void FUN_00975f62(string *param_1,string *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8;
  undefined4 local_1e6;
  undefined1 local_1e2;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined5 uStack_130;
  undefined3 local_12b;
  undefined5 uStack_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined7 local_c0;
  undefined4 uStack_b9;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  byte local_a0;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  if (*(char *)(unaff_RDI + 0x40) != '\0') {
    *(undefined1 *)(unaff_RDI + 0x40) = 0;
    plVar3 = *(longlong **)(unaff_RDI + 0x38);
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
    *(undefined8 *)(unaff_RDI + 0x38) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar4 = *(undefined8 *)(unaff_RDI + 8);
    plVar3 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    std::string::string(param_1,param_2);
    plVar5 = *(longlong **)(unaff_RDI + 0x10);
    *(undefined8 *)(unaff_RDI + 8) = 0;
    *(undefined8 *)(unaff_RDI + 0x10) = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    std::string::assign((char *)param_1);
    uVar9 = 0;
    uVar10 = 0;
    local_218 = &DAT_02519c18;
    local_210 = &DAT_02517118;
    local_208 = &DAT_02517058;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e6 = 0x101;
    local_1e2 = 0;
    local_1e0 = &DAT_0251b468;
    local_1d8 = &DAT_0251b398;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = &DAT_0251b400;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    local_12b = 0;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_120 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_e8 = &DAT_0251d288;
    local_c0 = 0;
    uStack_b9 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_a8 = 4;
    local_a4 = 0x100;
    std::string::operator=((string *)(segment_command_00000020.segname + 8),(string *)&DAT_0251d288)
    ;
    FUN_008f91be();
    FUN_00978a88();
    uVar6 = FUN_009e95e1();
    local_78 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
    FUN_00976983(0,1);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    uVar8 = *(undefined4 *)(unaff_RDI + 0x44);
    local_58 = *(undefined8 *)(unaff_RDI + 0x48);
    local_50 = *(longlong **)(unaff_RDI + 0x50);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      local_50[1] = local_50[1] + 1;
      UNLOCK();
    }
    puVar7 = &local_68;
    local_68 = uVar4;
    local_60 = plVar3;
    uVar8 = FUN_00930118(puVar7,&local_48,uVar8,&local_58,uVar9,uVar10,uVar6);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_50 + 0x10))();
        uVar8 = std::__shared_weak_count::__release_weak();
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_60 + 0x10))();
        uVar8 = std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00977ced(uVar8,&local_218);
    if (local_48 != 0) {
      lStack_40 = local_48;
      operator_delete(puVar7);
    }
    if (local_88 != 0) {
      lStack_80 = local_88;
      operator_delete(puVar7);
    }
    FUN_008b98bc();
    FUN_008b9182();
    if ((local_a0 & 1) != 0) {
      operator_delete(puVar7);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


