// Function: FUN_012771c0
// Address: 012771c0
// Size: 3613 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_012771c0(double param_1,byte param_2)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  void*puVar12;
  void*puVar13;
  void* pVar14;
  int64_t *in_RCX;
  int64_t *plVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar18;
  bool bVar19;
  int64_t lVar20;
  int64_t lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int64_t local_d8;
  char local_d0;
  double local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  plVar15 = in_RCX;
  local_38 = (int64_t *)FUN_000bea40();
  pVar14 = (void*)plVar15;
  (**(code **)(*local_38 + 0x18))();
  plVar15 = (int64_t *)*in_RCX;
  if (plVar15 == (int64_t *)0x0) {
    local_50 = (int64_t *)0x0;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      plVar15 = (int64_t *)*in_RCX;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar15 = (int64_t *)plVar15[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    pplVar18 = &local_48;
    (**(code **)(*plVar15 + 0x378))();
    plVar15 = local_48;
    FUN_01131770();
    if (plVar15 == (int64_t *)0x0) {
LAB_0127727c:
      pplVar18 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar15 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_0127727c;
    }
    local_50 = *pplVar18;
    if (*(char *)(pplVar18 + 1) == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar18 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01266770();
  plVar15 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01266b80();
  plVar6 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar16 = 0;
  FUN_004f2260(0,FUN_012759c0);
  plVar2 = local_48;
  plVar17 = (int64_t *)*arg1;
  if (plVar17 == local_48) {
    if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_012773ab;
      FUN_00d50b00();
      goto LAB_012773e1;
    }
  }
  else {
    lVar10 = arg1[1];
    if (local_40 != '\0') {
      *arg1 = (int64_t)local_48;
      if (((char)lVar10 != '\0') && (plVar17 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_012773ab:
      *(void*)(arg1 + 1) = 1;
      goto LAB_012773f9;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *arg1 = (int64_t)plVar2;
    if (((char)lVar10 != '\0') && (plVar17 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_012773e1:
    *(void*)(arg1 + 1) = 1;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_012773f9:
  plVar17 = (int64_t *)CONCAT71((int7)((uint64_t)uVar16 >> 8),!NAN(param_1));
  pVar14 = (void*)plVar17;
  lVar10 = *arg1;
  if (0 < *(int *)(lVar10 + 0xc)) {
    lVar20 = 0;
    do {
      plVar2 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar20 * 8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((void*)plVar17);
      if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        lVar10 = plVar2[0x19];
      }
      else {
        lVar10 = *(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 200);
      }
      if (lVar10 != 0) {
        FUN_00d50b00();
        if ((param_2 & !NAN(param_1)) != 0) {
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152e7b0(param_1);
        }
        pvVar9 = _pthread_getspecific((void*)plVar17);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_0126ee50();
        if (cVar7 == '\0') {
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            if (plVar2[0x1b] == 0) goto LAB_0127758f;
LAB_012775ae:
            pvVar9 = _pthread_getspecific((void*)plVar17);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef490();
          }
          else {
            if (*(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xd8) != 0)
            goto LAB_012775ae;
LAB_0127758f:
            local_40 = '\0';
            local_48 = (int64_t *)0x0;
          }
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_01326de0();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((iVar8 != 3 || plVar15 == plVar2) || plVar6 == plVar2) goto LAB_0127766f;
        }
        else {
LAB_0127766f:
          pvVar9 = _pthread_getspecific((void*)plVar17);
          plVar11 = plVar2;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          dVar24 = (double)plVar11[0x1d] + (double)plVar11[0x17];
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0152e9b0(param_1);
          pVar14 = (void*)plVar17;
          if (local_50 != (int64_t *)0x0) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar11 = local_50;
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              plVar17 = local_50;
              plVar11 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            pVar14 = (void*)plVar17;
            local_58 = (double)(**(code **)(*plVar11 + 0x3d8))(local_58,1);
          }
          pvVar9 = _pthread_getspecific(pVar14);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar14 = (void*)local_38;
          }
          iVar8 = FUN_013f3690(dVar24);
          if (iVar8 == -1) {
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (void*)local_38;
            }
            FUN_013f2b00();
            iVar8 = *(int *)((int64_t)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar19 = true;
            iVar4 = -(uint)(iVar8 == 0);
          }
          else {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (int64_t)iVar8;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (void*)lVar10;
            if ((dVar22 != dVar24) || (bVar19 = false, NAN(dVar22) || NAN(dVar24))) {
              if ((dVar23 != local_58) || (bVar19 = false, NAN(dVar23) || NAN(local_58))) {
                dVar22 = (dVar24 - dVar22) / (local_58 - dVar23);
                pVar14 = (void*)
                         CONCAT71((int7)((uint64_t)lVar10 >> 8),dVar22 <= g_023b1e98);
                bVar19 = g_023b3498 <= dVar22 && dVar22 <= g_023b1e98;
              }
            }
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (void*)local_38;
            }
            FUN_013f2b00();
            iVar1 = *(int *)((int64_t)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            iVar4 = iVar8 + 1;
            if (iVar1 + -1 <= iVar8) {
              iVar4 = -1;
            }
          }
          bVar3 = bVar19;
          if ((iVar4 != -1) && (bVar3 = false, bVar19)) {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (int64_t)iVar4;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (void*)lVar10;
            bVar3 = false;
            if ((dVar24 != dVar22) || (NAN(dVar24) || NAN(dVar22))) {
              if ((local_58 != dVar23) || (NAN(local_58) || NAN(dVar23))) {
                dVar22 = (dVar22 - dVar24) / (dVar23 - local_58);
                pVar14 = (void*)
                         CONCAT71((int7)((uint64_t)lVar10 >> 8),dVar22 <= g_023b1e98);
                bVar3 = g_023b3498 <= dVar22 && dVar22 <= g_023b1e98;
              }
            }
          }
          if (bVar3) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar17 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar10 = FUN_00e8b990(), plVar17 = local_38, lVar10 != 0)) {
              plVar17 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar17 + 0x410))(dVar24,local_58);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar10 = *arg1;
      pVar14 = *(void* *)(lVar10 + 0xc);
      plVar17 = (int64_t *)(int64_t)(int)pVar14;
    } while (lVar20 < (int64_t)plVar17);
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  plVar17 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int64_t)*(int *)((int64_t)plVar17 + 0xc) != 0) {
    lVar10 = *(int64_t *)(plVar17[2] + -8 + (int64_t)*(int *)((int64_t)plVar17 + 0xc) * 8);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar14 = 0x25ddb28;
    *puVar12 = &g_025ddb28;
    puVar12[0xb] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    *(void*)((int64_t)puVar12 + 0x43) = 0;
    *(void*)((int64_t)puVar12 + 0x4b) = 0;
    pcVar5 = g_025ddb40;
    (*g_025ddb40)();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + g_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + g_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar14 = (void*)local_38;
    }
    FUN_013f2b30();
    lVar20 = *(int64_t *)plVar17[2];
    lVar21 = lVar10;
    if (lVar10 != lVar20) {
      if (lVar20 != 0) {
        FUN_00d50b00();
      }
      lVar21 = lVar20;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &g_025ddb28;
    puVar13[0xb] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    *(void*)((int64_t)puVar13 + 0x43) = 0;
    *(void*)((int64_t)puVar13 + 0x4b) = 0;
    (*pcVar5)();
    if (puVar12 == puVar13) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + g_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + g_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2cf0();
    FUN_00d50b20();
    if (lVar21 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

