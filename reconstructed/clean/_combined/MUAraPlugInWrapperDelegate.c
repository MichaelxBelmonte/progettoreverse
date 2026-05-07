// ===================================================================
// MUAraPlugInWrapperDelegate — Complete reconstructed pseudocode
// 8 functions
// ===================================================================

// Registered properties (4):
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


// ============================================================
// 01694ec0
// ============================================================
// Function: FUN_01694ec0
// Address: 01694ec0
// Size: 1636 bytes
// Class: MUAraPlugInWrapperDelegate
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01694ec0(void* param_1)

{
  int iVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0x98) != 0) {
    FUN_0167ab60();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537ab0();
    iVar1 = *(int *)(local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 1) {
      FUN_0167ab60();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      FUN_00d23310();
      lVar7 = local_58;
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
      pcVar6 = local_38;
      if (local_50[0] != '\0') {
        pcVar6 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar6 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        lVar7 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
    }
    else if (*(int *)(*(int64_t *)(arg1 + 0xa8) + 0xc) == 0) {
      if (*(int *)(*(int64_t *)(arg1 + 0xb8) + 0xc) == 0) {
        if (*(int *)(*(int64_t *)(arg1 + 0xb0) + 0xc) == 0) goto LAB_016954cf;
        FUN_00d23310();
        lVar3 = local_58;
        pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
        pcVar6 = local_38;
        if (local_50[0] != '\0') {
          pcVar6 = local_50;
        }
        local_38[0] = local_50[0];
        *pcVar6 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01653bd0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8a10();
        lVar7 = local_48;
        if (local_48 == 0) {
          lVar7 = 0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d23310();
        lVar3 = local_58;
        pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
        pcVar6 = &local_68;
        if (local_50[0] != '\0') {
          pcVar6 = local_50;
        }
        local_68 = local_50[0];
        *pcVar6 = '\0';
        if ((local_50[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8a10();
        lVar7 = local_48;
        if (local_48 == 0) {
          lVar7 = 0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        if ((local_68 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_58;
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
      pcVar6 = local_38;
      if (local_50[0] != '\0') {
        pcVar6 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar6 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      lVar7 = local_48;
      if (local_48 == 0) {
        lVar7 = 0;
        bVar2 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar7 != 0) {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01710460();
      lVar3 = local_58;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01710460();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        lVar3 = local_58;
        *(void*)(this_ptr + 1) = 0;
        if (local_50[0] == '\0') {
          if (local_58 == 0) {
            *this_ptr = 0;
            *(void*)(this_ptr + 1) = 1;
          }
          else {
            FUN_00d50b00();
            *this_ptr = lVar3;
            *(void*)(this_ptr + 1) = 1;
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          *this_ptr = local_58;
          *(void*)(this_ptr + 1) = 1;
          local_50[0] = '\0';
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar2) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (bVar2) {
        FUN_00d50b20();
      }
    }
  }
LAB_016954cf:
  FUN_0190f240();
  return;
}



// ============================================================
// 01690c50
// ============================================================
// Function: FUN_01690c50
// Address: 01690c50
// Size: 1459 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "regionSequence->getDocumentController() == plugInWrapper->_documentController"
//   "selection != NULL"
//   "selection->structSize >= ARA::kARAViewSelectionMinSize"
//   "selection->playbackRegionRefs != NULL"
//   "selection->regionSequenceRefs != NULL"
//   "provided object ref is invalid"
//   "call required from document main thread"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01690c50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  char cVar7;
  void *pvVar8;
  void* pVar9;
  uint64_t uVar10;
  uint64_t *arg1;
  int64_t this_ptr;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_60;
  int64_t local_48;
  char local_40;
  
  uVar13 = FUN_00da7190();
  if ((this_ptr == 0) || (*(int64_t *)(this_ptr + 0x28) == 0)) {
    FUN_016aea20(uVar13,"provided object ref is invalid");
    goto LAB_016911bb;
  }
  FUN_00d50b00();
  cVar7 = FUN_0168a0d0();
  if (cVar7 == '\0') {
    FUN_016aea20(extraout_XMM0_Qa,"call required from document main thread");
  }
  else if (arg1 == (uint64_t *)0x0) {
    FUN_016aea20(extraout_XMM0_Qa,"selection != NULL");
  }
  else if (*arg1 < 0x30) {
    FUN_016aea20(extraout_XMM0_Qa,"selection->structSize >= ARA::kARAViewSelectionMinSize");
  }
  else {
    if (arg1[1] == 0) {
      bVar5 = false;
      lVar11 = 0;
      uVar13 = extraout_XMM0_Qa;
    }
    else {
      if (arg1[2] == 0) {
        FUN_016aea20(extraout_XMM0_Qa,"selection->playbackRegionRefs != NULL");
        goto LAB_016911b3;
      }
      uVar13 = FUN_01691440();
      if (local_48 == 0) {
        lVar11 = 0;
        bVar5 = false;
      }
      else {
        bVar5 = true;
        lVar11 = local_48;
        if (local_40 == '\0') {
          uVar13 = FUN_00d50b00();
        }
      }
      if (arg1[1] != 0) {
        uVar12 = 0;
        do {
          lVar6 = local_48;
          uVar10 = arg1[2];
          if (*(int64_t *)(uVar10 + uVar12 * 8) == 0) {
LAB_01690f49:
            FUN_016aea20(uVar10,"provided object ref is invalid");
            goto LAB_016911a1;
          }
          cVar7 = FUN_01658870();
          uVar10 = arg1[2];
          if (cVar7 == '\0') goto LAB_01690f49;
          lVar1 = *(int64_t *)(uVar10 + uVar12 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific((void*)uVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_01654a00();
          lVar2 = *(int64_t *)(this_ptr + 0x98);
          if ((local_40 != '\0') && (local_48 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if (local_48 == lVar2) {
            local_40 = '\0';
            uVar13 = FUN_00d21140();
            local_48 = lVar1;
          }
          else {
            uVar13 = FUN_016aea20(uVar13,
                                  "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
                                 );
          }
          if (lVar1 != 0) {
            uVar13 = FUN_00d50b20();
          }
          if (lVar6 != lVar2) goto LAB_016911a1;
          uVar12 = uVar12 + 1;
        } while (uVar12 < arg1[1]);
      }
    }
    if (arg1[3] == 0) {
      local_60 = 0;
      bVar4 = false;
LAB_0169112b:
      puVar3 = (void*)arg1[5];
      if (puVar3 == (void*)0x0) {
        uVar13 = FUN_00e7b500(g_023908c8,0);
      }
      else {
        uVar13 = FUN_00e7b500(*puVar3,puVar3[1]);
      }
      local_a0 = local_60;
      local_98 = 0;
      FUN_016914e0(uVar13,&local_a0);
LAB_0169118e:
      if ((bVar4) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (arg1[4] != 0) {
        FUN_00323290();
        local_60 = local_48;
        if (local_48 == 0) {
          bVar4 = false;
          local_60 = 0;
        }
        else {
          bVar4 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        if (arg1[3] != 0) {
          uVar12 = 0;
          do {
            lVar6 = local_48;
            uVar10 = arg1[4];
            if (*(int64_t *)(uVar10 + uVar12 * 8) == 0) {
LAB_016911d6:
              FUN_016aea20(uVar10,"provided object ref is invalid");
              goto LAB_0169118e;
            }
            cVar7 = FUN_012c91b0();
            uVar10 = arg1[4];
            if (cVar7 == '\0') goto LAB_016911d6;
            lVar1 = *(int64_t *)(uVar10 + uVar12 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pVar9 = (void*)uVar10;
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_012c89b0();
            local_90 = *(int64_t *)(this_ptr + 0x98);
            if ((local_40 != '\0') && (local_48 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            if (local_48 == local_90) {
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c8f20();
              local_48 = local_88;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              local_78 = local_48;
              local_40 = '\0';
              FUN_00d21140();
              if (local_78 != 0) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_016aea20(uVar13,
                           "regionSequence->getDocumentController() == plugInWrapper->_documentController"
                          );
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (lVar6 != local_90) goto LAB_0169118e;
            uVar12 = uVar12 + 1;
          } while (uVar12 < arg1[3]);
        }
        goto LAB_0169112b;
      }
      FUN_016aea20(uVar13,"selection->regionSequenceRefs != NULL");
    }
LAB_016911a1:
    if ((bVar5) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_016911b3:
  FUN_00d50b20();
LAB_016911bb:
  FUN_00da71b0();
  return;
}



// ============================================================
// 01692ed0
// ============================================================
// Function: FUN_01692ed0
// Address: 01692ed0
// Size: 1245 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01692ed0(void)

{
  int64_t *plVar1;
  char cVar2;
  char *pcVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  if (this_ptr[0x13] != 0) {
    if (this_ptr[6] != 0) {
      (**(code **)(*this_ptr + 0x5f0))();
    }
    cVar2 = FUN_016ae5f0();
    if (cVar2 != '\0') {
      while( true ) {
        lVar4 = this_ptr[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        iVar5 = *(int *)(lVar4 + 0xc);
        FUN_00d50b20();
        if (iVar5 == 0) break;
        FUN_00d50b00();
        lVar4 = this_ptr[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_0168eed0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    if (*(int *)(this_ptr[0x17] + 0xc) != 0) {
      do {
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_016908b0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      } while (*(int *)(this_ptr[0x17] + 0xc) != 0);
    }
    if (this_ptr[0x15] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = this_ptr[0x15];
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (int64_t *)this_ptr[5];
        if ((g_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_02723548 = "MUAraPlugInWrapperDelegate";
          g_02723558 = 0;
          g_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (int64_t *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar4) + 0x30))();
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    if (this_ptr[0x16] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar5 = 0;
      local_50 = this_ptr[0x16];
      while( true ) {
        if (iVar5 != 0) {
          if (iVar5 < 1) {
            iVar5 = -iVar5;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar5);
            FUN_00d23690();
            local_40 = local_40 + iVar5;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (int64_t *)this_ptr[5];
        if ((g_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_02723548 = "MUAraPlugInWrapperDelegate";
          g_02723558 = 0;
          g_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (int64_t *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar4) + 0x40))();
        iVar5 = local_48._4_4_;
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    FUN_00d50b00();
    FUN_016897c0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00e83070();
  }
  FUN_00bd1510();
  return;
}



// ============================================================
// 01693b00
// ============================================================
// Function: FUN_01693b00
// Address: 01693b00
// Size: 900 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "_isEditorView"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


uint64_t FUN_01693b00(uint32_t param_1)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  void *pvVar4;
  uint64_t uVar5;
  void* pVar6;
  char *pcVar7;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_78;
  char local_70 [8];
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  char local_38 [8];
  
  if ((*(char *)(this_ptr + 0xa7) == '\0') &&
     (FUN_016aea20(param_1,"_isEditorView"), *(char *)(this_ptr + 0xa7) == '\0')) {
    uVar3 = 0;
  }
  else {
    *(byte *)(this_ptr + 0xa0) = *(byte *)(this_ptr + 0xa0) | 4;
    uVar3 = FUN_00bd58a0();
    if ((*(int64_t *)(this_ptr + 0x98) != 0) && (cVar2 = FUN_016ae5f0(), cVar2 != '\0')) {
      FUN_00da7190();
      if (*(int *)(*(int64_t *)(this_ptr + 0xa8) + 0xc) != 0) {
        FUN_00b68bb0();
        if (local_78 == 0) {
          cVar2 = '\x01';
        }
        else {
          FUN_00b68bb0();
          cVar2 = FUN_00d45ad0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70[0] != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_58 = 0;
          lVar8 = 0;
        }
        else {
          FUN_00d23310();
          pVar6 = CONCAT31((int3)((uint)param_1 >> 8),local_70[0]);
          pcVar7 = local_38;
          if (local_70[0] != '\0') {
            pcVar7 = local_70;
          }
          local_38[0] = local_70[0];
          *pcVar7 = '\0';
          if ((local_70[0] != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01653bd0();
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8f20();
          local_60 = 0;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_60 = '\x01';
          local_68 = local_98;
          uVar5 = FUN_000ba510();
          lVar8 = local_50;
          if (local_50 == 0) {
            local_58 = 0;
          }
          else if (local_48 == '\0') {
            uVar5 = FUN_00d50b00();
            local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
            local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar1 = *(int64_t *)(this_ptr + 0xa8);
        if (lVar1 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_00d50b00();
          lVar9 = *(int64_t *)(this_ptr + 0xa8);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_01653c10();
        FUN_016914e0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00da71b0();
    }
  }
  return uVar3;
}



// ============================================================
// 016948c0
// ============================================================
// Function: FUN_016948c0
// Address: 016948c0
// Size: 775 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
//   "%p"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_016948c0(void)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  void*local_68;
  uint local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  if (*(char *)(this_ptr + 0xa4) != '\0') {
    *(void*)(this_ptr + 0xa4) = 0;
    plVar5 = *(int64_t **)(this_ptr + 0x28);
    if ((g_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_02723548 = "MUAraPlugInWrapperDelegate";
      g_02723558 = 0;
      g_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
      lVar2 = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
    }
    (**(code **)(*(int64_t *)((int64_t)plVar5 + lVar2) + 0x18))();
    local_58 = *(void*)(this_ptr + 0x98);
    local_60 = 1;
    pVar4 = 0x2576920;
    local_68 = &g_02576920;
    FUN_00d8cb40(&g_02576920,&local_68);
    local_50 = local_30;
    local_48 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    FUN_00bd69b0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_0167ab60();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01538260();
    local_40 = local_68;
    local_38 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_38 = '\x01';
    FUN_00bd78f0();
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = *(int64_t **)(this_ptr + 0x28);
    if ((g_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_02723548 = "MUAraPlugInWrapperDelegate";
      g_02723558 = 0;
      g_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
      lVar2 = *(int64_t *)(this_ptr + 0x98);
      plVar5 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
      plVar5 = (int64_t *)((int64_t)plVar5 + lVar2);
      lVar2 = *(int64_t *)(this_ptr + 0x98);
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x20))
              (*(void*)(this_ptr + 0xa6),*(void*)(this_ptr + 0xa5),
               *(void*)(this_ptr + 0xa7));
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01691640
// ============================================================
// Function: FUN_01691640
// Address: 01691640
// Size: 726 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "regionSequence->getDocumentController() == plugInWrapper->_documentController"
//   "regionSequenceRefs != NULL"
//   "provided object ref is invalid"
//   "call required from document main thread"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01691640(void* param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  lVar3 = local_48;
  FUN_00da7190();
  if ((this_ptr == 0) || (*(int64_t *)(this_ptr + 0x28) == 0)) {
    FUN_016aea20();
    goto LAB_0169190c;
  }
  FUN_00d50b00();
  cVar5 = FUN_0168a0d0();
  if (cVar5 == '\0') {
    FUN_016aea20();
  }
  else {
    FUN_00323290();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (arg1 == 0) {
LAB_01691888:
      FUN_01691a70();
    }
    else {
      if (param_2 != 0) {
        lVar7 = 0;
        do {
          lVar4 = local_48;
          if ((*(int64_t *)(param_2 + lVar7 * 8) == 0) || (cVar5 = FUN_012c91b0(), cVar5 == '\0'))
          {
            FUN_016aea20();
            goto LAB_016918f7;
          }
          lVar1 = *(int64_t *)(param_2 + lVar7 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c89b0();
          lVar2 = *(int64_t *)(this_ptr + 0x98);
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == lVar2) {
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c8f20();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_48 = local_70;
            local_40 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_016aea20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar4 != lVar2) goto LAB_016918f7;
          lVar7 = lVar7 + 1;
        } while (arg1 != lVar7);
        goto LAB_01691888;
      }
      FUN_016aea20();
    }
LAB_016918f7:
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0169190c:
  FUN_00da71b0();
  return;
}



// ============================================================
// 016908b0
// ============================================================
// Function: FUN_016908b0
// Address: 016908b0
// Size: 689 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_016908b0(void* param_1)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar5 = local_58;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_016909f2;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_016909f2;
  local_50 = '\0';
  local_58 = 0;
  local_40 = -1;
  while( true ) {
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(lVar5 + 0xc) <= local_40) break;
    local_58 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar4 * 8);
    FUN_0168eff0();
  }
  FUN_00277f20();
  param_1 = (void*)lVar5;
  FUN_00d50b20();
LAB_016909f2:
  plVar1 = *(int64_t **)(this_ptr + 0x28);
  if ((g_02723560 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_02723548 = "MUAraPlugInWrapperDelegate";
    g_02723558 = 0;
    g_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
    lVar5 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    lVar5 = FUN_00e86120();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar5) + 0x50))();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23f50();
  return;
}



// ============================================================
// 01690310
// ============================================================
// Function: FUN_01690310
// Address: 01690310
// Size: 611 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01690310(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_016948c0();
  lVar1 = *arg1;
  FUN_00d21140();
  plVar2 = *(int64_t **)(this_ptr + 0x28);
  if ((g_02723560 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02723548 = "MUAraPlugInWrapperDelegate";
    g_02723558 = 0;
    g_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
    lVar4 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    lVar4 = FUN_00e86120();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)((int64_t)plVar2 + lVar4) + 0x48))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (lVar1 != 0) {
    FUN_00d50b00();
    for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
      FUN_0168f6a0();
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
  return;
}

