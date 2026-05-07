// Function: FUN_01ed6a90
// Address: 01ed6a90
// Size: 1102 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed6a90(uint64_t param_1,uint32_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  char cVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x928))();
  FUN_01ed7190();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (this_ptr[0x54] == 0) {
    *(void*)(this_ptr + 0x30) = 0;
  }
  else {
    local_50 = local_40;
    uVar9 = FUN_01e436c0();
    FUN_01ed48b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    plVar2 = (int64_t *)this_ptr[0x54];
    local_78 = 0;
    local_88 = local_40;
    FUN_00d50b00();
    local_78 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_80 = this_ptr;
    (**(code **)(*plVar2 + 0x18))(&local_a8,&local_80);
    lVar3 = local_98;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    FUN_00d243f0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = this_ptr[0x56];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar10 = FUN_00d243f0();
    if (lVar3 != 0) {
      uVar10 = FUN_00d50b20();
    }
    FUN_00c8e340(uVar10,0);
    iVar1 = *(int *)(this_ptr[0x57] + 0xc);
    *(int *)(this_ptr + 0x30) = iVar1;
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        plVar2 = (int64_t *)this_ptr[0x54];
        local_68 = 0;
        FUN_00d50b00();
        local_68 = '\x01';
        lVar8 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + lVar7 * 8);
        local_58 = 0;
        local_70 = this_ptr;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar8;
        uVar10 = (**(code **)(*plVar2 + 0x18))(&local_60,&local_70);
        if (lVar3 != 0) {
          uVar10 = FUN_00d50b00();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if (((lVar3 == 0) || (*(int *)(lVar3 + 0xc) != 0)) ||
           (cVar6 = (**(code **)(*this_ptr + 0xa40))(), uVar10 = extraout_XMM0_Da, cVar6 != '\0'))
        {
          bVar5 = false;
          lVar8 = lVar3;
        }
        else {
          uVar10 = FUN_00d50b20();
          bVar5 = true;
          lVar8 = 0;
        }
        lVar4 = this_ptr[0x58];
        iVar1 = *(int *)(lVar4 + 0x18);
        FUN_00c8e340(uVar10,1);
        *(uint64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar1) =
             (uint64_t)(lVar8 != 0) << 0x20;
        if (!bVar5 && lVar8 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)this_ptr[0x30]);
    }
    FUN_01ed4a40();
    FUN_01e3f820();
    cVar6 = FUN_00d05440();
    if (cVar6 != '\0') {
      (**(code **)(*this_ptr + 0x518))(uVar9,param_2);
    }
    local_40 = local_50;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01dcfdb0();
  FUN_01ed73b0();
  (**(code **)(*this_ptr + 0x930))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

