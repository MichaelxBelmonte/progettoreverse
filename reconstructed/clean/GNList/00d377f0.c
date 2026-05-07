// Function: FUN_00d377f0
// Address: 00d377f0
// Size: 2079 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d377f0(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t lVar6;
  char cVar7;
  uint8_t uVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  int iVar11;
  int64_t lVar12;
  uint *puVar13;
  int64_t lVar14;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar16;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_40;
  char cStack_38;
  
  FUN_00d50f50();
  cVar7 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  local_60 = g_0277d7d0;
  if (cVar7 != '\0') {
    plVar2 = (int64_t *)*arg1;
    uVar16 = extraout_XMM0_Qa;
    if (g_0277d7d0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_58 = '\x01';
    (**(code **)(*plVar2 + 0x578))(uVar16,&local_60);
    if ((cStack_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar12 = *(int64_t *)(this_ptr + 0x28);
    uVar1 = *(uint *)(lVar12 + 0x18);
    local_50 = local_40;
    if (0x2f < (int)uVar1) {
      lVar14 = 0;
      lVar15 = 0;
      do {
        lVar12 = *(int64_t *)(lVar12 + 0x10);
        lVar3 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar14);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        puVar13 = &switchD_00d37921::switchdataD_00d380f4;
        uVar5 = local_40._4_4_;
        lVar6 = local_40;
        switch(*(void*)(lVar12 + 0x28 + lVar15)) {
        case 0x40:
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) == '@') {
            lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
            lVar6 = lVar3;
            if (lVar4 != lVar3) {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
              *(int64_t *)(lVar12 + 0x18 + lVar15) = lVar3;
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            iVar11 = FUN_00e82730();
            local_40 = lVar3;
LAB_00d37f8b:
            _memcpy(puVar13,(void *)(int64_t)iVar11,param_3);
            lVar6 = local_40;
          }
          break;
        case 0x43:
          local_40 = FUN_00dd63c0();
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x45:
          local_40 = FUN_00dd6b50();
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x10 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x49:
          uVar10 = FUN_00d45870();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x50:
          local_40 = FUN_00dd6bf0();
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x52:
          local_40 = FUN_00dd6ab0();
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x10 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x5e:
          uVar10 = FUN_00d45870();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x62:
          uVar8 = FUN_00d45ad0();
          local_40 = CONCAT71(local_40._1_7_,uVar8);
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 99:
          uVar8 = FUN_00dd6290();
          local_40 = CONCAT71(local_40._1_7_,uVar8);
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 100:
          local_40 = FUN_00d45bc0();
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x66:
          uVar10 = FUN_00d459e0();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x69:
          uVar10 = FUN_00d460c0();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x6c:
          local_40 = FUN_00d45790();
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x71:
          local_40 = FUN_00dd6320();
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x73:
          uVar9 = FUN_00d460c0();
          local_40 = CONCAT62(local_40._2_6_,uVar9);
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(int64_t *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
        }
        local_40 = lVar6;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((uint64_t)(uVar1 / 0x18 - 1) * 0x18 + -0x18 == lVar15) goto LAB_00d37fc5;
        lVar12 = *(int64_t *)(this_ptr + 0x28);
        lVar15 = lVar15 + 0x18;
        lVar14 = lVar14 + 8;
      } while( true );
    }
    if (local_40 != 0) {
LAB_00d37fc5:
      FUN_00d50b20();
    }
  }
  return;
}

