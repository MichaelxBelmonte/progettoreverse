// ===================================================================
// GNEditingContextReadCopySyncObserver — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (4):
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


// ============================================================
// 00cbc710
// ============================================================
// Function: FUN_00cbc710
// Address: 00cbc710
// Size: 1247 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbc710(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  char *pcVar6;
  int64_t lVar7;
  int iVar8;
  void*arg1;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = local_88;
  FUN_00d4efa0();
  local_48[0] = local_80[0];
  pcVar6 = local_48;
  if (local_80[0] != '\0') {
    pcVar6 = local_80;
  }
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c81c40();
  local_40[0] = local_80[0];
  pcVar6 = local_40;
  if (local_80[0] != '\0') {
    pcVar6 = local_80;
  }
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_78 = lVar4;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar8 = -local_70._4_4_;
        }
        else {
          iVar8 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar8);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar8 = 0;
        }
        local_70 = CONCAT44(iVar8,(int)local_70);
      }
      lVar7 = (int64_t)(int)local_70;
      iVar8 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      if (*(int *)(local_78 + 0xc) <= iVar8) break;
      local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar7 * 8);
      lVar7 = *(int64_t *)(local_88 + 0x60);
      if (((lVar7 == 0) || ((*(byte *)(lVar7 + 0x18) & 0x10) == 0)) &&
         (*(char *)(lVar7 + 0x19) != '\0')) {
        if (*(char *)(lVar7 + 0x19) == '@') {
          plVar1 = (int64_t *)*arg1;
          (**(code **)(*(int64_t *)*param_2 + 0x210))();
          lVar7 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*plVar1 + 0x200))(0,local_88,1);
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar1 = (int64_t *)*arg1;
          (**(code **)(*(int64_t *)*param_2 + 0x218))();
          (**(code **)(*plVar1 + 0x208))(1,local_88);
        }
      }
    }
    FUN_00cc1480();
  }
  FUN_00c820a0();
  pcVar6 = local_80;
  if (local_80[0] == '\0') {
    pcVar6 = local_38;
  }
  local_38[0] = local_80[0];
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = lVar4;
  if (local_88 != 0) {
    local_60 = lVar4;
    local_80[0] = '\0';
    local_78 = local_88;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar7 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar7 * 8);
        lVar3 = *(int64_t *)(lVar2 + 0x70);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x18) & 0x10) == 0)) {
          cVar5 = FUN_00d77de0();
          if (cVar5 == '\0') {
            plVar1 = (int64_t *)*arg1;
            (**(code **)(*(int64_t *)*param_2 + 0x210))();
            lVar3 = local_58;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            (**(code **)(*plVar1 + 0x200))(0,lVar2,1);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*(int64_t *)*arg1 + 0x210))();
            (**(code **)(*(int64_t *)*param_2 + 0x210))();
            if (local_c8 == '\0') {
              if (local_d0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_58 = local_d0;
            local_50 = '\0';
            FUN_00d243f0();
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (local_d0 != 0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar7 = lVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(local_88 + 0xc));
    }
    FUN_00559a70();
    lVar7 = local_60;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00cbadd0
// ============================================================
// Function: FUN_00cbadd0
// Address: 00cbadd0
// Size: 1086 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbadd0(int64_t *param_1,int64_t *param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  char *pcVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  char *pcVar10;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x368))();
    if (*(int *)(this_ptr + 0xac) != 0) {
      lVar8 = *(int64_t *)(this_ptr + 0xb0);
      uVar11 = *(uint *)(lVar8 + 0xc);
      uVar12 = (uint64_t)uVar11;
      if (0 < (int)uVar11) {
        while( true ) {
          uVar11 = uVar11 - 1;
          lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + (uint64_t)uVar11 * 8);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if (((*(int64_t *)(lVar8 + 0x10) == *arg1) &&
              ((*param_2 == 0 || (*(int64_t *)(lVar8 + 0x18) == *param_2)))) &&
             ((*param_1 == 0 || (*(int64_t *)(lVar8 + 0x20) == *param_1)))) {
            FUN_00e17e50();
            FUN_00d23620();
          }
          FUN_00d50b20();
          if ((int64_t)uVar12 < 2) break;
          uVar12 = uVar12 - 1;
          lVar8 = *(int64_t *)(this_ptr + 0xb0);
        }
      }
    }
    lVar8 = *arg1;
    lVar5 = FUN_00c8df20();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 8), lVar5 == 0)) {
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x378))();
    }
    else {
      FUN_00d50b00();
      uVar11 = *(uint *)(lVar5 + 0xc);
      if (0 < (int)uVar11) {
        lVar13 = (uint64_t)uVar11 + 1;
        do {
          uVar11 = uVar11 - 1;
          lVar2 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar11 * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if (((*(char *)(lVar2 + 0x38) == '\0') &&
              ((*param_2 == 0 || (*(int64_t *)(lVar2 + 0x18) == *param_2)))) &&
             ((*param_1 == 0 || (*(int64_t *)(lVar2 + 0x20) == *param_1)))) {
            FUN_00e17e50();
            lVar3 = *(int64_t *)(lVar2 + 0x30);
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_00cb93b0();
            local_38[0] = local_68[0];
            pcVar10 = local_38;
            pcVar6 = local_68;
            if (local_68[0] == '\0') {
              pcVar6 = pcVar10;
            }
            *pcVar6 = '\0';
            if ((local_68[0] != '\0') && (lVar8 != 0)) {
              FUN_00d50b20();
            }
            pVar9 = (void*)pcVar10;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if (lVar8 != 0) {
              piVar1 = (int *)(lVar8 + 0x1c);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                lVar3 = *(int64_t *)(lVar2 + 0x30);
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                FUN_00cb9610();
                if (lVar3 != 0) {
                  FUN_00d50b20();
                }
              }
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
            }
            if (*(char *)(lVar2 + 0x39) != '\0') {
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_58 = 0;
              lVar2 = *(int64_t *)(lVar2 + 0x20);
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              local_58 = '\x01';
              local_60 = lVar2;
              FUN_00e8c420();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            if (*(int *)(this_ptr + 0xac) == 0) {
              FUN_00d23620();
              FUN_00cba120();
            }
          }
          FUN_00d50b20();
          lVar13 = lVar13 + -1;
        } while (1 < lVar13);
      }
      if (*(int *)(this_ptr + 0xac) == 0) {
        if ((*(int *)(lVar5 + 0xc) == 0) && (lVar8 = FUN_00c8e050(), lVar8 != 0)) {
          if (*(int64_t *)(lVar8 + 8) != 0) {
            FUN_00d50b20();
          }
          FUN_00e83070();
        }
      }
      else {
        FUN_00c8e000();
      }
      if ((*(char *)(this_ptr + 0xe0) != '\0') && (iVar4 = FUN_00c8d620(), iVar4 == 0)) {
        *(void*)(this_ptr + 0xe0) = 0;
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x378))();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0118be50
// ============================================================
// Function: FUN_0118be50
// Address: 0118be50
// Size: 6059 bytes
// Class: GNEditingContextReadCopySyncObserver
// String references:
//   "GNEditingContextReadCopySyncObserver"
//   "GNHeartbeatHandler"
//   "MUPerformanceRenderer"
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_0118be50(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010f3160();
  this_ptr[0x1d] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x1e] = &g_025c31f8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025d43d8;
  this_ptr[0x1d] = &g_025d4ab0;
  this_ptr[0x1e] = &g_025d4ae0;
  FUN_0118da40();
  FUN_0118dd30();
  FUN_0118e020();
  FUN_0118e310();
  FUN_0118e600();
  this_ptr[0x24] = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_0118e8f0();
    FUN_00e87980();
  }
  FUN_0118ea60();
  FUN_0118ece0();
  FUN_0118efd0();
  FUN_0118f250();
  FUN_0118f4d0();
  FUN_0118f750();
  FUN_0118f9d0();
  FUN_0118fc50();
  FUN_0118fed0();
  FUN_011901c0();
  FUN_011904b0();
  *(void*)(this_ptr + 0x30) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_011907a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x181) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01190910();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x184) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01190a80();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x31) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01190cc0();
    FUN_00e87980();
  }
  FUN_01190f00();
  *(void*)(this_ptr + 0x33) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_011911f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x199) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01191360();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_011914d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19b) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01191640();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_011917b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01191920();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19e) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01191a90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19f) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01191c00();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01191d70();
    FUN_00e87980();
  }
  FUN_01191ee0();
  FUN_01192160();
  FUN_01192450();
  FUN_01192740();
  FUN_01192a30();
  *(void*)(this_ptr + 0x3a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01192d20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01192e90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01193000();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01193170();
    FUN_00e87980();
  }
  FUN_011932e0();
  FUN_01193560();
  FUN_011937e0();
  *(void*)(this_ptr + 0x3e) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01193a60();
    FUN_00e87980();
  }
  this_ptr[0x3f] = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01193bd0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x40) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01193d40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x204) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01193eb0();
    FUN_00e87980();
  }
  this_ptr[0x41] = 0;
  // [STATIC_INIT: property registration]
  if (g_027ab01b == '\0') {
    FUN_01194020();
    FUN_00e87980();
  }
  FUN_01194190();
  return;
}



// ============================================================
// 00cba5e0
// ============================================================
// Function: FUN_00cba5e0
// Address: 00cba5e0
// Size: 957 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cba5e0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint32_t param_4)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  int64_t local_e8;
  uint8_t local_e0;
  void*local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  void*local_b8;
  uint8_t local_b0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  uint32_t local_54;
  void*local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    local_54 = param_4;
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02587160;
    puVar2[6] = 0;
    *(void*)(puVar2 + 7) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(void*)((int64_t)puVar2 + 0x1c) = 0;
    *(void*)((int64_t)puVar2 + 0x24) = 0;
    (*g_02587178)();
    local_88 = *param_2;
    local_80 = '\0';
    local_78 = *param_1;
    local_70 = '\0';
    plVar6 = &local_78;
    FUN_00e17b20(plVar6,&local_88);
    pVar5 = (void*)plVar6;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e17bf0();
    FUN_00da5ad0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e17e00();
    if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e17c10();
    uVar7 = (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x368))();
    *(void*)(this_ptr + 0xe0) = 1;
    lVar1 = puVar2[6];
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_e0 = 1;
    local_e8 = lVar1;
    FUN_00cb93b0(uVar7,&local_e8);
    puVar3 = local_40;
    if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0256a258;
      puVar3[2] = 0;
      puVar3[3] = 0;
      uVar7 = FUN_00d500e0();
      lVar1 = puVar2[6];
      local_d0 = 0;
      local_d8 = puVar3;
      if (lVar1 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_c0 = 1;
      local_c8 = lVar1;
      FUN_00cb9610(uVar7,&local_c8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *(int *)((int64_t)puVar3 + 0x1c) = *(int *)((int64_t)puVar3 + 0x1c) + 1;
    if (*(int *)(this_ptr + 0xac) == 0) {
      local_60 = '\0';
      local_68 = puVar2;
      FUN_00cbabc0();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = 0;
      local_b8 = puVar2;
      FUN_00cb9a00();
      if ((char)local_54 != '\0') {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8bda0();
      }
    }
    else {
      local_38 = '\0';
      local_40 = puVar2;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00cbd950
// ============================================================
// Function: FUN_00cbd950
// Address: 00cbd950
// Size: 765 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


bool FUN_00cbd950(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  void*local_c8;
  uint8_t local_c0;
  uint8_t local_b8 [8];
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0256bf50;
  puVar3[2] = 0;
  uVar4 = FUN_00d500e0();
  lVar1 = *arg1;
  lVar2 = puVar3[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar4 = FUN_00d50b00();
    }
    puVar3[2] = lVar1;
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b20();
    }
  }
  local_c0 = 0;
  local_c8 = puVar3;
  FUN_00cbd790(uVar4,&local_c8);
  local_58 = local_88;
  local_50 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = '\x01';
  uVar4 = FUN_00e191b0(g_023b2c70,&local_58);
  lVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      uVar4 = FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_b0 = 1;
  FUN_00cbd5a0(uVar4,local_b8);
  lVar2 = local_78;
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    if (*(int64_t *)(lVar2 + 0x10) != 0) {
      local_70 = '\0';
      local_78 = 0;
      local_68 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 0x10);
      local_60 = 0;
      if (0 < *(int *)(local_68 + 0xc)) {
        local_38 = puVar3;
        do {
          local_78 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + (int64_t)local_60 * 8);
          FUN_00cbde50((int64_t)local_60,&local_78);
          lVar1 = local_48;
          if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_98 = FUN_00d45790();
          local_a8 = lVar1;
          local_a0 = '\0';
          local_90 = '\0';
          FUN_019b43b0(extraout_XMM0_Qa,&local_98);
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          puVar3 = local_38;
          local_60 = local_60 + 1;
        } while (local_60 < *(int *)(local_68 + 0xc));
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    if (puVar3 == (void*)0x0) goto LAB_00cbdc35;
  }
  FUN_00d50b20();
LAB_00cbdc35:
  return lVar2 != 0;
}



// ============================================================
// 00cbb900
// ============================================================
// Function: FUN_00cbb900
// Address: 00cbb900
// Size: 1245 bytes
// Class: GNEditingContextReadCopySyncObserver
// String references:
//   "GNEditingContextReadCopySyncObserver"
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbb900(void)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  iVar2 = FUN_00d36e20();
  if (iVar2 == 1) {
    FUN_00cb1fa0();
    cVar1 = (**(code **)(*this_ptr + 0x518))();
    if (cVar1 != '\0') {
      local_50 = '\0';
      local_58 = 0;
      FUN_00da5ad0();
      FUN_00da7170();
      FUN_00da7180();
      if (local_68 != 0) {
        cVar1 = (**(code **)(*this_ptr + 0x520))();
        if (cVar1 == '\0') {
          (**(code **)(*this_ptr + 0x528))();
          FUN_00cb1fa0();
        }
        FUN_00da7180();
        if ((local_68 != 0) && (local_60 != '\0')) {
          FUN_00d50b20();
        }
      }
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x29] + 0x368))();
      lVar3 = this_ptr[0x28];
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          plVar4 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8);
          if ((g_026d1090 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            g_027ab030 = "GNEditingContextReadCopySyncObserver";
            g_027ab040 = 0;
            g_027ab038 = 0;
            ___cxa_guard_release();
          }
          if (plVar4 == (int64_t *)0x0) {
            lVar3 = 0;
          }
          else {
            (**(code **)(*plVar4 + 0x360))();
            lVar3 = FUN_00e86120();
          }
          FUN_00d50b00();
          (**(code **)(*(int64_t *)((int64_t)plVar4 + lVar3) + 0x18))();
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          lVar3 = this_ptr[0x28];
        } while (lVar5 < *(int *)(lVar3 + 0xc));
      }
      (**(code **)(*(int64_t *)this_ptr[0x29] + 0x378))();
    }
    if (0 < (int)this_ptr[0x2a]) {
      FUN_00cbbfd0();
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      FUN_00da5ad0();
      cVar1 = *(char *)(local_58 + 0x18);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        FUN_00cb2d80();
      }
    }
    if (this_ptr[0x11] != 0) {
      this_ptr[0x11] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 1000))();
  }
  iVar2 = *(int *)((int64_t)this_ptr + 0xe4);
  if (iVar2 < 1) {
    iVar2 = (int)this_ptr[0x1d];
    if (iVar2 < 1) goto LAB_00cbbdba;
    plVar4 = this_ptr + 0x1d;
  }
  else {
    plVar4 = (int64_t *)((int64_t)this_ptr + 0xe4);
  }
  *(int *)plVar4 = iVar2 + -1;
LAB_00cbbdba:
  (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x378))();
  return;
}



// ============================================================
// 00cba120
// ============================================================
// Function: FUN_00cba120
// Address: 00cba120
// Size: 635 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cba120(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((*(int64_t *)(this_ptr + 0x90) != 0) &&
     (lVar1 = *arg1, *(char *)(lVar1 + 0x39) == '\0')) {
    lVar2 = *(int64_t *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      local_40 = 0;
      lVar1 = *(int64_t *)(lVar1 + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar1;
      FUN_00cb98a0(param_1,&local_48);
      lVar1 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d23d90();
        if (*(int *)(lVar1 + 0xc) == 0) {
          lVar1 = *(int64_t *)(*arg1 + 0x20);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_30 = '\0';
          local_38 = lVar1;
          FUN_00e383c0();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    else {
      local_50 = 0;
      FUN_00d50b00();
      local_50 = '\x01';
      local_58 = lVar2;
      FUN_00cb9950(param_1,&local_58);
      lVar1 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d23d90();
        if (*(int *)(lVar1 + 0xc) == 0) {
          lVar1 = *(int64_t *)(*arg1 + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_30 = '\0';
          local_38 = lVar1;
          FUN_00e383c0();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00cbbfd0
// ============================================================
// Function: FUN_00cbbfd0
// Address: 00cbbfd0
// Size: 611 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbbfd0(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t this_ptr;
  int local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (*(int *)(lVar1 + 0xc) != 0) {
    uVar4 = *(uint *)(this_ptr + 0x154);
    local_40 = -1;
    while( true ) {
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      uVar8 = *(void*)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8bc10();
      *(void*)(lVar5 + (uint64_t)(~uVar4 & 1) * 8) = uVar8;
    }
    FUN_00cc1410();
    uVar4 = FUN_00e31390();
    uVar8 = 3;
    cVar3 = FUN_00e314a0(3,uVar4 & 1 ^ 1);
    if (cVar3 == '\0') {
      iVar9 = 0x800;
      do {
        uVar4 = uVar4 & 1;
        if (1 < uVar4) {
          if (iVar9 < 2) {
            FUN_00da6800();
            iVar9 = 0x800;
          }
          else {
            iVar9 = iVar9 + -1;
          }
        }
        uVar8 = 3;
        cVar3 = FUN_00e314a0(3,uVar4 ^ 1);
      } while (cVar3 == '\0');
    }
    lVar1 = *(int64_t *)(this_ptr + 0x158);
    if (lVar1 != 0) {
      uVar4 = *(uint *)(this_ptr + 0x154);
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          uVar2 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar6 = _pthread_getspecific((void*)uVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar7 = FUN_00e8bc10();
          FUN_00d50b20();
          *(void*)(lVar7 + (uint64_t)(~uVar4 & 1) * 8) = uVar2;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_00cc1410();
    }
    FUN_00d216c0();
  }
  return;
}



// ============================================================
// 00cb9a00
// ============================================================
// Function: FUN_00cb9a00
// Address: 00cb9a00
// Size: 806 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cb9a00(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  void*local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x90) != 0) &&
     (lVar1 = *arg1, *(char *)(lVar1 + 0x39) == '\0')) {
    lVar2 = *(int64_t *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      lVar1 = *(int64_t *)(lVar1 + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
        FUN_00cb98a0();
        if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b00();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (local_40 == (void*)0x0) {
          local_40 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &g_02572358;
          (*g_02572370)();
          lVar1 = *(int64_t *)(*arg1 + 0x20);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00cba070();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d21140();
        if (local_40 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d50b00();
      FUN_00cb9950();
      if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == (void*)0x0) {
        local_40 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &g_02572358;
        (*g_02572370)();
        lVar1 = *(int64_t *)(*arg1 + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00cb9fc0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d21140();
      if (local_40 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

