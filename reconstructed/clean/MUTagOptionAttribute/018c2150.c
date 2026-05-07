// Function: FUN_018c2150
// Address: 018c2150
// Size: 741 bytes
// Class: MUTagOptionAttribute
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


int FUN_018c2150(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar10;
  int64_t *plVar11;
  int64_t *local_90;
  char local_88 [8];
  int64_t *local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint local_44;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 == 0) {
    iVar10 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      iVar10 = 0;
    }
    else {
      uVar8 = 0;
      iVar10 = 0;
      do {
        plVar2 = local_70;
        plVar11 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar8 * 8);
        pvVar3 = _pthread_getspecific(uVar8);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar11 + 0x368))();
        local_38[0] = local_68[0];
        pcVar7 = local_38;
        pcVar5 = local_68;
        if (local_68[0] == '\0') {
          pcVar5 = pcVar7;
        }
        local_44 = uVar8;
        *pcVar5 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = *arg1;
        pvVar3 = _pthread_getspecific((void*)pcVar7);
        if (pvVar3 != (void *)0x0) {
          lVar4 = *arg1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar4 = *(int64_t *)(lVar4 + 0x48);
        uVar8 = local_44;
        if (lVar4 != 0) {
          FUN_00d50b00();
          local_68[0] = '\0';
          local_70 = (int64_t *)0x0;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          local_60 = lVar4;
          while( true ) {
            uVar8 = local_44;
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                iVar9 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar9);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
            lVar4 = (int64_t)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)(local_60 + 0xc) <= iVar9) break;
            local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_60 + 0x10));
            plVar11 = local_70;
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar11 = (int64_t *)local_70[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar11 + 0x368))();
            local_40[0] = local_88[0];
            pcVar7 = local_88;
            if (local_88[0] == '\0') {
              pcVar7 = local_40;
            }
            *pcVar7 = '\0';
            if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            iVar10 = iVar10 + (uint)(local_90 == plVar2);
          }
          FUN_01894d60();
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_01894d60();
  }
  return iVar10;
}

