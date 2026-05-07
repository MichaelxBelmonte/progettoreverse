// Function: FUN_00d630e0
// Address: 00d630e0
// Size: 3052 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d630e0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  void*puVar6;
  char *pcVar7;
  uint uVar8;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_268;
  uint8_t local_260;
  int64_t local_258;
  uint8_t local_250;
  int64_t *local_248;
  char local_240;
  int64_t local_238;
  uint64_t local_230;
  uint32_t local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  uint64_t uVar9;
  
  local_220 = *arg1;
  local_218 = '\0';
  uVar12 = (**(code **)(*this_ptr + 600))(param_1,&local_220);
  plVar3 = local_248;
  if (local_240 == '\0') {
    if (((local_248 != (int64_t *)0x0) && (FUN_00e31530(uVar12,0), local_240 != '\0')) &&
       (local_248 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_240 = '\0';
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_240 = 0;
    local_248 = (int64_t *)0x0;
    local_238 = (int64_t)plVar3;
    local_228 = 0;
    local_230 = 0;
    if (0 < *(int *)((int64_t)plVar3 + 0xc)) {
      lVar11 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)((int64_t)plVar3 + 0x10) + lVar11 * 8);
        local_248 = plVar1;
        FUN_00d74120();
        local_40[0] = local_50[0];
        pcVar7 = local_50;
        if (local_50[0] == '\0') {
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        local_48 = local_58;
        cVar5 = (**(code **)(*plVar1 + 0x368))();
        if (cVar5 == '\0') {
          cVar5 = FUN_00d77e10();
          plVar2 = (int64_t *)*arg1;
          if (cVar5 == '\0') {
            uVar12 = (**(code **)(*this_ptr + 0x210))(extraout_XMM0_Qa,plVar1);
            local_68 = 0;
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_68 = '\x01';
            local_70 = local_58;
            local_f0 = local_48;
            local_e8 = '\0';
            (**(code **)(*plVar2 + 0x4f8))(uVar12,&local_f0);
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            uVar12 = (**(code **)(*this_ptr + 0x210))(extraout_XMM0_Qa,plVar1);
            local_78 = 0;
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_78 = '\x01';
            local_80 = local_58;
            local_100 = local_48;
            local_f8 = '\0';
            (**(code **)(*plVar2 + 0x4f0))(uVar12,&local_100);
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_00d637d0;
        }
        cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x388))();
        if (cVar5 == '\0') {
          FUN_00c77cd0();
          local_38[0] = local_50[0];
          pcVar7 = local_50;
          if (local_50[0] == '\0') {
            pcVar7 = local_38;
          }
          *pcVar7 = '\0';
          lVar4 = local_48;
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          cVar5 = FUN_00c7b220();
          uVar12 = extraout_XMM0_Qa_00;
          if (cVar5 == 'e') {
            uVar12 = FUN_00c7b2d0();
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            if (local_58 == 0) goto LAB_00d63447;
            plVar1 = (int64_t *)*arg1;
            local_130 = lVar4;
            local_128 = '\0';
            uVar12 = (**(code **)(*this_ptr + 0x1f8))(uVar12,&local_130);
            local_90 = local_e0;
            local_88 = 0;
            if (local_d8 == '\0') {
              if (local_e0 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_d8 = '\0';
            }
            local_88 = '\x01';
            uVar12 = FUN_00c7b3d0(uVar12,&local_90);
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_120 = local_48;
            local_118 = '\0';
            (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_120);
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_00d63447:
            plVar1 = (int64_t *)*arg1;
            local_258 = lVar4;
            local_250 = 0;
            uVar12 = FUN_00d603c0(uVar12,&local_258);
            if ((local_50[0] == '\0') && (local_58 != 0)) {
              uVar12 = FUN_00e31530(uVar12,0);
            }
            local_110 = local_48;
            local_108 = '\0';
            (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_110);
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00d637d0;
        }
        puVar6 = (void*)(**(code **)(*this_ptr + 0x218))();
        uVar8 = (int)*(char *)(plVar1[0xc] + 0x19) - 0x43;
        uVar9 = (uint64_t)uVar8;
        uVar10 = uVar9;
        if (uVar8 < 0x2f) {
          uVar10 = (int64_t)&switchD_00d63280::switchdataD_00d644fc +
                   (int64_t)(int)(&switchD_00d63280::switchdataD_00d644fc)[uVar9];
          switch(uVar9) {
          case 0:
            local_190 = local_48;
            local_188 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4e0))(uVar10,&local_190);
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            break;
          default:
            goto switchD_00d63280_caseD_1;
          case 2:
            local_1a0 = local_48;
            local_198 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4c8))(*puVar6,puVar6[1]);
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 6:
            local_200 = local_48;
            local_1f8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x498))(uVar10,&local_200);
            if ((local_1f8 != '\0') && (local_200 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0xd:
            local_1d0 = local_48;
            local_1c8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4d8))(*puVar6);
            if ((local_1c8 != '\0') && (local_1d0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0xf:
            local_1b0 = local_48;
            local_1a8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4c0))(*puVar6,puVar6[1]);
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x10:
            local_1c0 = local_48;
            local_1b8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4d0))(*puVar6);
            if ((local_1b8 != '\0') && (local_1c0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x1f:
            local_180 = local_48;
            local_178 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x488))(uVar10,&local_180);
            if ((local_178 != '\0') && (local_180 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x20:
            local_210 = local_48;
            local_208 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x490))(uVar10,&local_210);
            if ((local_208 != '\0') && (local_210 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x21:
            local_1e0 = local_48;
            local_1d8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4b8))(*puVar6);
            if ((local_1d8 != '\0') && (local_1e0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x22:
          case 0x26:
            local_170 = local_48;
            local_168 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4a0))(uVar10,&local_170);
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x23:
            local_1f0 = local_48;
            local_1e8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4b0))(*(void*)puVar6);
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x29:
            local_160 = local_48;
            local_158 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4a8))(uVar10,&local_160);
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x2e:
            local_150 = local_48;
            local_148 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4e8))(uVar10,&local_150);
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
switchD_00d63280_caseD_1:
          plVar1 = (int64_t *)*arg1;
          local_268 = local_48;
          local_260 = 0;
          uVar12 = FUN_00d603c0(uVar10,&local_268);
          if ((local_50[0] == '\0') && (local_58 != 0)) {
            uVar12 = FUN_00e31530(uVar12,0);
          }
          local_140 = local_48;
          local_138 = '\0';
          (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_140);
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
        }
LAB_00d637d0:
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
        local_230 = CONCAT44(local_230._4_4_,(int)lVar11);
      } while ((int)lVar11 < *(int *)((int64_t)plVar3 + 0xc));
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  return;
}

