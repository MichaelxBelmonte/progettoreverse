// Function: FUN_0166b8c0
// Address: 0166b8c0
// Size: 4536 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0166b8c0(void*******param_1)

{
  void*******pppppppuVar1;
  int64_t *plVar2;
  bool bVar3;
  uint8_t uVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void *pvVar8;
  void*******pppppppuVar9;
  int64_t lVar10;
  void* pVar11;
  char unaff_SIL;
  int64_t this_ptr;
  void*******pppppppuVar12;
  bool bVar13;
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
  void*******local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_a0;
  char local_98;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*******local_68;
  char local_60;
  int local_50;
  
  pppppppuVar12 = local_68;
  if (*(int64_t *)(this_ptr + 0xf0) == 0) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00115cd0();
    param_1 = (void*******)&g_025f50e8;
    *puVar7 = &g_025f50e8;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    (*g_025f5100)();
    FUN_01660e50();
    FUN_00d50b20();
  }
  else if (*(char *)(this_ptr + 0xe8) != '\0') {
    if ((((*(double *)(this_ptr + 0xc0) != *(double *)(this_ptr + 200)) ||
         (NAN(*(double *)(this_ptr + 0xc0)) || NAN(*(double *)(this_ptr + 200)))) ||
        (*(int64_t *)(this_ptr + 0xd0) != *(int64_t *)(this_ptr + 0xd8))) ||
       (*(int *)(this_ptr + 0xe0) != *(int *)(this_ptr + 0xe4))) {
      iVar6 = FUN_00e31390();
      if ((iVar6 != 0) || (*(int64_t *)(this_ptr + 0xd0) != 0)) {
        FUN_01662650();
        pppppppuVar1 = *(void********)(this_ptr + 0x120);
        pppppppuVar9 = pppppppuVar1;
        if (pppppppuVar1 != local_68) {
          pppppppuVar9 = local_68;
          if (local_60 == '\0') {
            if (local_68 == (void*******)0x0) {
              pppppppuVar9 = (void*******)0x0;
              goto LAB_0166b9ea;
            }
            FUN_00d50b00();
            pppppppuVar1 = *(void********)(this_ptr + 0x120);
            *(void********)(this_ptr + 0x120) = local_68;
          }
          else {
            local_60 = '\0';
LAB_0166b9ea:
            *(void********)(this_ptr + 0x120) = pppppppuVar9;
          }
          if (pppppppuVar1 != (void*******)0x0) {
            FUN_00d50b20();
            pppppppuVar9 = local_68;
          }
        }
        if ((local_60 != '\0') && (pppppppuVar9 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00115cd0();
        param_1 = (void*******)&g_025f50e8;
        *puVar7 = &g_025f50e8;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        (*g_025f5100)();
        FUN_01660e50();
        FUN_00d50b20();
        FUN_0184a0e0();
      }
    }
    else {
      *(void*)(this_ptr + 0xe8) = 0;
    }
  }
  if (*(int64_t *)(this_ptr + 0x130) == 0) {
    FUN_01664ba0();
  }
  if (unaff_SIL != '\0') {
    return;
  }
  iVar6 = FUN_00e31390();
  if ((((iVar6 == 0) || (*(double *)(this_ptr + 0xc0) <= 0.0)) ||
      (*(int64_t *)(this_ptr + 0xd0) < 1)) ||
     ((*(int *)(this_ptr + 0xe0) == 0 || (*(char *)(this_ptr + 0x104) != '\0'))))
  goto LAB_0166c8a8;
  pvVar8 = _pthread_getspecific((void*)param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124e100();
  if (local_60 == '\0') {
    if (local_68 != (void*******)0x0) {
      FUN_00d50b00();
      goto LAB_0166bbb4;
    }
LAB_0166bc5f:
    if (*(int64_t *)(this_ptr + 0x120) == 0) {
      cVar5 = FUN_01667df0();
      if ((cVar5 == '\0') &&
         ((*(char *)(this_ptr + 0x11c) != '\0' || (cVar5 = FUN_0166d280(), cVar5 != '\0')))) {
        FUN_0141b1a0();
        if (local_68 == (void*******)0x0) {
          pppppppuVar12 = (void*******)0x0;
          bVar3 = false;
        }
        else {
          bVar3 = true;
          pppppppuVar12 = local_68;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        uVar4 = 0;
        goto LAB_0166bd21;
      }
      goto LAB_0166bca3;
    }
    uVar4 = FUN_0166d280();
    pppppppuVar12 = *(void********)(this_ptr + 0x120);
    if (pppppppuVar12 == (void*******)0x0) goto LAB_0166bca3;
    FUN_00d50b00();
    bVar3 = true;
LAB_0166bd21:
    pVar11 = (void*)param_1;
    if (pppppppuVar12 == (void*******)0x0) {
      bVar13 = true;
    }
    else {
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      if (local_68 == (void*******)0x0) {
        bVar13 = true;
      }
      else {
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124df10();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_016c2e90();
        bVar13 = iVar6 == 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        FUN_01669ad0();
      }
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      if (local_68 == (void*******)0x0) {
        bVar13 = true;
      }
      else {
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124df10();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eb60();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_018232b0();
        if (iVar6 == 0) {
          bVar13 = true;
        }
        else {
          pvVar8 = _pthread_getspecific(pVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124df10();
          pvVar8 = _pthread_getspecific(pVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0132d900();
          pvVar8 = _pthread_getspecific(pVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01510030();
          if (local_170 == 0) {
            bVar13 = true;
          }
          else {
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d900();
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01510030();
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar6 = FUN_0124ae30();
            bVar13 = iVar6 == 0;
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        FUN_0166a440();
      }
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510280();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_018847d0();
      if ((local_60 != '\0') && (local_68 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (iVar6 == 0) {
        FUN_0166b030();
      }
      plVar2 = *(int64_t **)(this_ptr + 0xa0);
      FUN_00d50b00();
      local_e8 = '\0';
      param_1 = &local_f0;
      local_f0 = pppppppuVar12;
      (**(code **)(*plVar2 + 0x380))(param_1,*(void*)(this_ptr + 0x105),uVar4);
      if ((local_e8 != '\0') && (local_f0 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      bVar13 = false;
    }
  }
  else {
    if (local_68 == (void*******)0x0) goto LAB_0166bc5f;
LAB_0166bbb4:
    local_60 = '\0';
    local_68 = (void*******)0x0;
    local_50 = -1;
    do {
      lVar10 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)pppppppuVar12 + 0xc) <= local_50) {
        FUN_00540b60();
        FUN_00d50b20();
        param_1 = pppppppuVar12;
        goto LAB_0166bc5f;
      }
      param_1 = (void*******)pppppppuVar12[2];
      local_68 = (void*******)param_1[lVar10 + 1];
      cVar5 = FUN_00e34d40();
    } while ((cVar5 == '\0') && (cVar5 = FUN_00e34a50(), cVar5 != '\0'));
    FUN_00540b60();
    FUN_00d50b20();
LAB_0166bca3:
    bVar13 = true;
    bVar3 = false;
  }
  pppppppuVar12 = local_68;
  *(void*)(this_ptr + 0x105) = 0;
  if (*(int *)(*(int64_t *)(this_ptr + 0xa8) + 0xc) != 0) {
    pvVar8 = _pthread_getspecific((void*)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124c6e0();
    if (local_60 == '\0') {
      if (local_68 != (void*******)0x0) {
        FUN_00d50b00();
        goto LAB_0166c72c;
      }
    }
    else if (local_68 != (void*******)0x0) {
LAB_0166c72c:
      local_60 = '\0';
      local_68 = (void*******)0x0;
      local_50 = -1;
      while( true ) {
        lVar10 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((int64_t)pppppppuVar12 + 0xc) <= local_50) break;
        local_68 = (void*******)pppppppuVar12[2][lVar10 + 1];
        pvVar8 = _pthread_getspecific((void*)pppppppuVar12[2]);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = '\0';
        local_e0 = (int64_t *)0x0;
        local_d0 = (int64_t *)0x0;
        local_c8 = '\0';
        FUN_01397bb0(0,&local_d0);
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          (**(code **)(*local_d0 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          (**(code **)(*local_e0 + 0x10))();
          FUN_00d50b20();
        }
      }
      FUN_00115190();
      FUN_00d50b20();
      param_1 = pppppppuVar12;
    }
  }
  if (bVar3 && !bVar13) {
    FUN_00d50b20();
  }
LAB_0166c8a8:
  if (*(char *)(this_ptr + 0xe9) != '\0') {
    FUN_0167ab60();
    pvVar8 = _pthread_getspecific((void*)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537ab0();
    if ((local_60 == '\0') && (local_68 != (void*******)0x0)) {
      FUN_00d50b00();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != (void*******)0x0) {
      if (0 < *(int *)((int64_t)local_68 + 0xc)) {
        iVar6 = 0;
        do {
          pvVar8 = _pthread_getspecific((void*)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50b00();
          param_1 = (void*******)((int64_t)&MACH_HEADER.magic + 1);
          FUN_01710690(1,1);
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)((int64_t)local_68 + 0xc));
      }
      FUN_0166fd40();
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0xe9) = 0;
  }
  FUN_01733c30();
  return;
}

