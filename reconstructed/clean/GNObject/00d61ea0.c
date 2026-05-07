// Function: FUN_00d61ea0
// Address: 00d61ea0
// Size: 2607 bytes
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


void FUN_00d61ea0(uint32_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  uint32_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_208;
  char local_200;
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
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint8_t local_51;
  int64_t local_40;
  uint32_t uStack_38;
  
  local_1e0 = *arg1;
  local_1d8 = '\0';
  uVar7 = (**(code **)(*this_ptr + 600))(param_1,&local_1e0);
  if ((local_200 == '\0') && (local_208 != 0)) {
    FUN_00e31530(uVar7,0);
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  local_51 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if (local_208 != 0) {
    if (0 < *(int *)(local_208 + 0xc)) {
      lVar6 = 0;
      do {
        lVar2 = local_40;
        plVar1 = *(int64_t **)(*(int64_t *)(local_208 + 0x10) + lVar6 * 8);
        uVar7 = FUN_00d74120();
        if (((char)uStack_38 == '\0') && (local_40 != 0)) {
          FUN_00e31530(uVar7,0);
        }
        local_1d0 = local_40;
        local_1c8 = '\0';
        cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x590))();
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*plVar1 + 0x368))();
          if (cVar3 == '\0') {
            local_b0 = local_40;
            local_a8 = '\0';
            uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da,&local_b0);
            local_60 = 0;
            if ((char)uStack_38 == '\0') {
              if (local_40 != 0) {
                FUN_00e31530(uVar7,0);
              }
            }
            else {
              uStack_38 = 0;
            }
            local_60 = '\x01';
            local_a0 = local_40;
            local_98 = '\0';
            local_68 = local_a0;
            (**(code **)(*this_ptr + 0x1f0))(local_51,&local_a0,0);
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if (((char)uStack_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x390))();
            if (cVar3 == '\0') {
              local_d0 = local_40;
              local_c8 = '\0';
              uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_d0);
              local_70 = 0;
              if ((char)uStack_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00e31530(uVar7,0);
                }
              }
              else {
                uStack_38 = 0;
              }
              local_70 = '\x01';
              local_c0 = local_40;
              local_b8 = '\0';
              local_78 = local_c0;
              (**(code **)(*this_ptr + 0x1f0))(0);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              uVar7 = local_40._4_4_;
              switch(*(void*)(plVar1[0xc] + 0x19)) {
              case 0x43:
                local_140 = local_40;
                local_138 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x568))();
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              default:
                local_f0 = local_40;
                local_e8 = '\0';
                uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x578))
                                  (extraout_XMM0_Da_00,&local_f0);
                local_80 = 0;
                if ((char)uStack_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00e31530(uVar7,0);
                  }
                }
                else {
                  uStack_38 = 0;
                }
                local_80 = '\x01';
                local_e0 = local_40;
                local_d8 = '\0';
                local_88 = local_e0;
                (**(code **)(*this_ptr + 0x1f0))();
                if ((local_d8 != '\0') && (local_e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
                if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 0x45:
                local_150 = local_40;
                local_148 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x550))();
                uStack_38 = (uint32_t)param_2;
                if ((local_148 != '\0') && (local_150 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x49:
                local_1b0 = local_40;
                local_1a8 = '\0';
                uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x520))();
                if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x50:
                local_180 = local_40;
                local_178 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x560))();
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x52:
                local_160 = local_40;
                local_158 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x548))();
                uStack_38 = (uint32_t)param_2;
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x53:
                local_170 = local_40;
                local_168 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x558))();
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x62:
                local_130 = local_40;
                local_128 = '\0';
                uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x510))();
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 99:
                local_1c0 = local_40;
                local_1b8 = '\0';
                uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x518))();
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 100:
                local_190 = local_40;
                local_188 = '\0';
                local_90 = (**(code **)(*(int64_t *)*arg1 + 0x540))();
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = local_90;
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x65:
              case 0x69:
                local_120 = local_40;
                local_118 = '\0';
                uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x528))();
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x66:
                local_1a0 = local_40;
                local_198 = '\0';
                uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x538))();
                local_90 = CONCAT44(local_90._4_4_,uVar5);
                if ((local_198 != '\0') && (local_1a0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,(uint32_t)local_90);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x6c:
                local_110 = local_40;
                local_108 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x530))();
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x71:
                local_100 = local_40;
                local_f8 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x570))();
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
              }
            }
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_208 + 0xc));
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  return;
}

