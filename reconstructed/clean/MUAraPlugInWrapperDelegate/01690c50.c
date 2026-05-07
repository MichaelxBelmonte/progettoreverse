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

