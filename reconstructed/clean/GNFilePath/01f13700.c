// Function: FUN_01f13700
// Address: 01f13700
// Size: 1527 bytes
// Class: GNFilePath
// String references:
//   "defaultManager"
//   "fileSystemRepresentation"

void* FUN_01f13700(void)

{
  bool bVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  void*this_ptr;
  uint uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint64_t local_188;
  uint64_t uStack_180;
  int64_t *local_178;
  uint64_t uStack_170;
  uint64_t local_168;
  uint64_t uStack_160;
  uint64_t local_158;
  uint64_t uStack_150;
  void*local_148;
  void*local_140;
  int64_t local_138;
  int64_t local_130;
  uint64_t local_128;
  uint64_t local_120;
  int64_t local_100;
  char local_f8;
  int64_t *local_d0;
  char local_c8;
  uint8_t local_b8 [128];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  _objc_alloc();
  uVar6 = (*PTR__objc_msgSend_024a9998)();
  uVar7 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,1);
  uVar7 = (*PTR__objc_msgSend_024a9998)
                    (*(void*)PTR__NSPasteboardURLReadingFileURLsOnlyKey_0249c170,uVar7);
  uVar8 = (*PTR__objc_msgSend_024a9998)();
  uVar8 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_00,uVar8);
  uVar7 = (*PTR__objc_msgSend_024a9998)(uVar7,uVar8);
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = (int64_t *)0x0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_128 = uVar6;
  lVar9 = (*PTR__objc_msgSend_024a9998)(local_b8,&local_188,0x10);
  puVar2 = PTR__objc_msgSend_024a9998;
  if (lVar9 != 0) {
    local_130 = *local_178;
    local_120 = uVar7;
    do {
      local_148 = PTR_s_fileSystemRepresentation_026c9c38;
      local_140 = PTR_s_defaultManager_026c9388;
      lVar11 = 0;
      local_138 = lVar9;
      do {
        if (*local_178 != local_130) {
          _objc_enumerationMutation();
        }
        uVar6 = (*puVar2)();
        (*puVar2)();
        iVar4 = FUN_00e7dde0();
        (*puVar2)((int64_t)iVar4,uVar6);
        FUN_00e1ccf0();
        if (local_f8 == '\0') {
          if (local_100 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f8 = '\0';
        }
        FUN_00cddf30();
        if (local_c8 == '\0') {
          if (local_d0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        FUN_00d21140();
        if (local_d0 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_100 != 0) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
      } while (local_138 != lVar11);
      lVar9 = (*puVar2)(local_b8,&local_188,0x10);
    } while (lVar9 != 0);
  }
  (*PTR__objc_release_024a99a0)();
  uVar10 = *(uint *)((int64_t)puVar5 + 0xc);
  uVar12 = (uint64_t)uVar10;
  if (0 < (int)uVar10) {
    do {
      uVar13 = uVar12 - 1;
      plVar14 = *(int64_t **)(puVar5[2] + (uVar13 & 0xffffffff) * 8);
      cVar3 = (**(code **)(*plVar14 + 0x4c0))();
      if ((cVar3 != '\0') || (cVar3 = (**(code **)(*plVar14 + 0x4a8))(), cVar3 != '\0')) {
        FUN_00d50b00();
        do {
          cVar3 = (**(code **)(*plVar14 + 0x4c0))();
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*plVar14 + 0x4a8))();
            if (cVar3 == '\0') {
              FUN_00d233f0(extraout_XMM0_Da_01,uVar13 & 0xffffffff);
              FUN_00d50b20();
              goto LAB_01f13aef;
            }
            (**(code **)(*plVar14 + 0x4b0))();
            if (local_d0 != plVar14) {
              if (local_c8 != '\0') {
                FUN_00d50b20();
                plVar14 = local_d0;
                goto LAB_01f13b47;
              }
              if (local_d0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              plVar14 = local_d0;
            }
            if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*plVar14 + 0x4c8))();
            if (local_d0 == plVar14) {
              if ((local_c8 != '\0') && (plVar14 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_c8 == '\0') {
              if (local_d0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              plVar14 = local_d0;
            }
            else {
              FUN_00d50b20();
              plVar14 = local_d0;
            }
          }
LAB_01f13b47:
        } while (plVar14 != (int64_t *)0x0);
        FUN_00d23620();
      }
LAB_01f13aef:
      bVar1 = 1 < (int64_t)uVar12;
      uVar12 = uVar13;
    } while (bVar1);
    uVar10 = *(uint *)((int64_t)puVar5 + 0xc);
  }
  if (uVar10 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return this_ptr;
}

