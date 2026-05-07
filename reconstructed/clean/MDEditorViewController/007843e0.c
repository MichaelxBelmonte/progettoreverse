// Function: FUN_007843e0
// Address: 007843e0
// Size: 845 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_007843e0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  uint uVar4;
  void* pVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *arg1;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint64_t local_d0;
  uint32_t local_c8;
  int64_t local_c0;
  uint8_t local_b8 [8];
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int local_74;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  local_d8 = *arg1;
  if (local_d8 != 0) {
    local_e0 = 0;
    local_e8 = 0;
    local_c8 = 0;
    local_d0 = 0;
    if (0 < *(int *)(local_d8 + 0xc)) {
      uVar6 = 0;
      local_c0 = local_d8;
      do {
        local_74 = (int)uVar6;
        lVar1 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + uVar6 * 8);
        local_a0 = '\0';
        local_e8 = lVar1;
        local_a8 = lVar1;
        FUN_004f9cf0();
        local_70 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 != 0) {
          local_60 = '\0';
          local_68 = 0;
          local_58 = local_70;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
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
            lVar2 = (int64_t)(int)local_50;
            iVar8 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            if (*(int *)(local_58 + 0xc) <= iVar8) break;
            lVar7 = *(int64_t *)(local_58 + 0x10);
            local_88 = *(int64_t *)(lVar7 + 8 + lVar2 * 8);
            local_90 = '\0';
            local_80 = '\0';
            local_98 = lVar1;
            local_68 = local_88;
            FUN_004f9d80(lVar7,&local_88);
            lVar2 = local_40;
            pVar5 = (void*)lVar7;
            if (local_38 == '\0') {
              if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e60a0();
            lVar7 = local_40;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_b0 = 1;
            local_f8 = lVar2;
            local_f0 = 0;
            FUN_00784900(&local_f8,local_b8);
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00115190();
          FUN_00d50b20();
        }
        uVar4 = local_74 + 1;
        uVar6 = (uint64_t)uVar4;
        local_d0 = CONCAT44(local_d0._4_4_,uVar4);
      } while ((int)uVar4 < *(int *)(local_c0 + 0xc));
    }
    FUN_000be170();
  }
  return;
}

