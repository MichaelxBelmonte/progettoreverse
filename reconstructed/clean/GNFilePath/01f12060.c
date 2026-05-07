// Function: FUN_01f12060
// Address: 01f12060
// Size: 882 bytes
// Class: GNFilePath

void FUN_01f12060(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  bool bVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  float fVar10;
  uint8_t auVar11 [16];
  uint32_t local_e8;
  int64_t local_70;
  int64_t *local_40;
  char local_38;
  
  FUN_01cb4790();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar8 = this_ptr[0x2d];
  if (lVar8 == 0) {
    (**(code **)(*this_ptr + 0x930))();
    lVar8 = this_ptr[0x2d];
  }
  iVar6 = *(int *)(lVar8 + 0x18);
  iVar5 = FUN_01d5b230();
  iVar7 = iVar6 + 0xf;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  if (iVar7 >> 4 != iVar5) {
    (**(code **)(*this_ptr + 0x930))();
  }
  FUN_01e3f820();
  (**(code **)(*local_40 + 0x3f0))(4,0x2d,0,1);
  lVar8 = 8;
  for (local_70 = 0; iVar6 = FUN_01d5b230(), local_70 < iVar6; local_70 = local_70 + 1) {
    FUN_01d5b240();
    if (local_40 == (int64_t *)0x0) {
      bVar3 = true;
      plVar9 = (int64_t *)0x0;
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar3 = false;
      }
      else {
        bVar3 = false;
      }
    }
    uVar1 = *(uint64_t *)(*(int64_t *)(this_ptr[0x2d] + 0x10) + -8 + lVar8);
    uVar2 = *(void*)(*(int64_t *)(this_ptr[0x2d] + 0x10) + lVar8);
    fVar10 = (float)(uVar1 >> 0x20) + g_02390124;
    FUN_01d65230();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar4 = this_ptr[0x2c];
    FUN_01d65320();
    FUN_01d65320();
    FUN_01d65e30();
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar1;
    auVar11 = insertps(auVar11,fVar10,0x10);
    local_e8 = (uint32_t)uVar2;
    (**(code **)(*local_40 + 0x5f0))(auVar11._0_8_,local_e8,(int)lVar4,0,3);
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3 && plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar8 = lVar8 + 0x10;
  }
  FUN_00d50b20();
  return;
}

