// Function: FUN_012bafd0
// Address: 012bafd0
// Size: 7453 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_012bafd0(uint32_t param_1,int param_2,uint32_t param_3,int64_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  double dVar9;
  bool bVar10;
  void *pvVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  char *pcVar15;
  int64_t lVar16;
  uint64_t uVar17;
  void* pVar18;
  uint64_t in_RCX;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar21;
  uint64_t uVar22;
  uint32_t in_R8D;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint32_t uVar28;
  double dVar29;
  uint32_t uVar30;
  uint32_t in_XMM4_Da;
  uint32_t in_XMM4_Db;
  uint64_t local_res8;
  int64_t local_res10;
  int64_t local_res18;
  uint64_t local_118;
  char local_110 [8];
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint32_t local_c8;
  uint32_t local_c4;
  uint64_t local_c0;
  int64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  float local_3c;
  char local_38 [8];
  
  dVar9 = (double)CONCAT44(in_XMM4_Db,in_XMM4_Da);
  lVar13 = *arg1;
  local_c8 = g_0240d164;
  local_c4 = in_R8D;
  if (lVar13 != 0) {
    uVar19 = in_RCX;
    pvVar11 = _pthread_getspecific((void*)in_RCX);
    if (pvVar11 != (void *)0x0) {
      lVar13 = *arg1;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar13 + 0x7d) == '\0') {
      lVar13 = *arg1;
      local_b8 = param_4;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x40);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar12 + 0x70) == 0) {
        local_a0 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_a0 = *(void*)(*(int64_t *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x40);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar12 + 0x58) == 0) {
        local_f0 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_f0 = *(void*)(*(int64_t *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x48);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar12 + 0x58) == 0) {
        uVar20 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(void*)(*(int64_t *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x50);
      local_e8 = uVar20;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar12 + 0x58) == 0) {
        local_b0 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x50);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x50);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_b0 = *(void*)(*(int64_t *)(lVar12 + 0x58) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar13 + 0x88) == 0) {
        local_a8 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_a8 = *(void*)(*(int64_t *)(lVar13 + 0x88) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      local_c8 = *(void*)(lVar13 + 0xac);
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x48);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      uVar28 = *(void*)(lVar12 + 0x8c);
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x50);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      uVar30 = *(void*)(lVar12 + 0x8c);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7b) == '\0') {
        local_108 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_108 = *(void*)(*(int64_t *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7c) == '\0') {
        local_100 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x50);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x50);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        local_100 = *(void*)(*(int64_t *)(lVar12 + 0x70) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar13 + 0x7a) == '\0') {
LAB_012bb9a5:
        uVar20 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        if (*(int64_t *)(lVar13 + 0x90) == 0) goto LAB_012bb9a5;
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(void*)(*(int64_t *)(lVar13 + 0x90) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x40);
      local_e0 = uVar20;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x40);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        uVar20 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x40);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x40);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(void*)(*(int64_t *)(lVar12 + 0x68) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x48);
      local_d8 = uVar20;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x48);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        uVar20 = 0;
      }
      else {
        lVar13 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar13 = *arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(lVar13 + 0x48);
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *(int64_t *)(lVar13 + 0x48);
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
        }
        uVar20 = *(void*)(*(int64_t *)(lVar12 + 0x68) + 0x10);
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x50);
      local_d0 = uVar20;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x50);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) != '\0') {
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x58);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x58);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      if (*(char *)(lVar12 + 0x49) == '\0') {
        local_c0 = 0;
        lVar13 = local_b8;
      }
      else {
        lVar12 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        lVar13 = local_b8;
        if (pvVar11 != (void *)0x0) {
          lVar12 = *arg1;
          lVar14 = FUN_00e8b990();
          if (lVar14 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
        }
        if (*(int64_t *)(lVar12 + 0x98) == 0) {
          local_c0 = 0;
        }
        else {
          lVar12 = *arg1;
          pvVar11 = _pthread_getspecific((void*)uVar19);
          if (pvVar11 != (void *)0x0) {
            lVar12 = *arg1;
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8)
              ;
            }
          }
          local_c0 = *(void*)(*(int64_t *)(lVar12 + 0x98) + 0x10);
        }
      }
      lVar12 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *arg1;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar12 + 0xa0) == 0) {
        local_f8 = 0;
      }
      else {
        lVar12 = *arg1;
        pvVar11 = _pthread_getspecific((void*)uVar19);
        if (pvVar11 != (void *)0x0) {
          lVar12 = *arg1;
          lVar14 = FUN_00e8b990();
          if (lVar14 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
        }
        local_f8 = *(void*)(*(int64_t *)(lVar12 + 0xa0) + 0x10);
      }
      lVar12 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *arg1;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar26 = *(float *)(lVar12 + 0xb8);
      lVar12 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *arg1;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar27 = *(float *)(lVar12 + 0xbc);
      lVar12 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *arg1;
        lVar14 = FUN_00e8b990();
        if (lVar14 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
      }
      fVar2 = *(float *)(lVar12 + 0xc0);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar12 = *(int64_t *)(this_ptr + 0x2d8);
      uVar19 = CONCAT71((int7)(uVar19 >> 8),lVar12 < 0);
      if (lVar12 <= lVar13 && lVar12 >= 0) {
        *(uint64_t *)(this_ptr + 0x2d0) = local_res8;
        *(void*)(this_ptr + 0x2d8) = 0xffffffffffffffff;
        dVar29 = (double)local_res10 * dVar9 + g_023934c8;
        *(void*)(this_ptr + 0x2e0) = 0;
        *(double *)(this_ptr + 0x2e8) = dVar29;
        *(void*)(this_ptr + 0x2f0) = 0;
        *(void*)(this_ptr + 0x2f8) = 0;
        uVar19 = local_res8;
      }
      FUN_00d23340();
      local_38[0] = local_110[0];
      pcVar15 = local_110;
      if (local_110[0] == '\0') {
        pcVar15 = local_38;
      }
      *pcVar15 = '\0';
      if ((local_110[0] != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (local_118 != 0) {
        lVar13 = *(int64_t *)(this_ptr + 0x2d8);
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (lVar13 == -1) {
          FUN_00d23340();
          pcVar15 = local_110;
          if (local_110[0] == '\0') {
            pcVar15 = local_38;
          }
          local_38[0] = local_110[0];
          *pcVar15 = '\0';
          if ((local_110[0] != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] == '\0') && (local_118 != 0)) {
            FUN_00d50b00();
          }
          pvVar11 = _pthread_getspecific((void*)uVar19);
          uVar17 = local_118;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            uVar19 = local_118;
            uVar17 = *(uint64_t *)
                      (local_118 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
          }
          lVar13 = *(int64_t *)(uVar17 + 0x50);
          pvVar11 = _pthread_getspecific((void*)uVar19);
          if (pvVar11 != (void *)0x0) {
            lVar13 = *(int64_t *)(uVar17 + 0x50);
            lVar12 = FUN_00e8b990();
            if (lVar12 != 0) {
              lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8)
              ;
            }
          }
          lVar13 = *(int64_t *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar11 = _pthread_getspecific((void*)uVar19);
          lVar12 = lVar13;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar12 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
          lVar12 = *(int64_t *)(lVar12 + 0x58);
          pvVar11 = _pthread_getspecific((void*)uVar19);
          lVar14 = lVar13;
          if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            lVar14 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
          lVar12 = lVar12 + *(int64_t *)(lVar14 + 0xd0);
          *(int64_t *)(this_ptr + 0x2d8) = lVar12;
          dVar29 = (double)lVar12 * dVar9;
          fVar25 = (float)(dVar29 - (double)*(int64_t *)(this_ptr + 0x2d0) * dVar9) * g_02391090
          ;
          if (g_02421228 <= fVar25) {
            fVar25 = g_02421228;
          }
          *(float *)(this_ptr + 0x2f0) = fVar25;
          *(double *)(this_ptr + 0x2e8) = dVar29 - (double)fVar25;
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if (local_118 != 0) {
            FUN_00d50b20();
          }
        }
      }
      fVar25 = 0.0;
      if ((((fVar26 != 0.0) || (NAN(fVar26))) || (0.0 < fVar27)) || ((fVar2 != 0.0 || (NAN(fVar2))))
         ) {
        uVar23 = (void*)in_RCX + param_2;
        uVar8 = *(uint *)(this_ptr + 0x160);
        uVar19 = (uint64_t)uVar8;
        if ((int)uVar8 < 1) {
          fVar26 = 0.0;
        }
        else {
          if ((int)uVar23 < 1) {
            fVar26 = 0.0;
          }
          else {
            fVar26 = 0.0;
            uVar17 = 0;
            do {
              lVar13 = *(int64_t *)(*(int64_t *)(this_ptr + 0x1e0) + uVar17 * 8);
              uVar21 = 0;
              if (2 < (uint64_t)uVar23 - 1) {
                do {
                  fVar2 = *(float *)(lVar13 + uVar21 * 4);
                  fVar25 = *(float *)(lVar13 + 4 + uVar21 * 4);
                  fVar3 = *(float *)(lVar13 + 8 + uVar21 * 4);
                  fVar4 = *(float *)(lVar13 + 0xc + uVar21 * 4);
                  fVar26 = fVar4 * fVar4 + fVar3 * fVar3 + fVar25 * fVar25 + fVar2 * fVar2 + fVar26;
                  uVar21 = uVar21 + 4;
                } while ((uVar23 & 0xfffffffc) != uVar21);
              }
              if ((uint64_t)(uVar23 & 3) != 0) {
                uVar22 = 0;
                do {
                  fVar2 = *(float *)(lVar13 + uVar21 * 4 + uVar22 * 4);
                  fVar26 = fVar26 + fVar2 * fVar2;
                  uVar22 = uVar22 + 1;
                } while ((uVar23 & 3) != uVar22);
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar19);
          }
          if (1 < (int)uVar8) {
            fVar26 = fVar26 / (float)(int)uVar8;
          }
        }
        fVar25 = SQRT(fVar26 / (float)(int)uVar23) * g_0240d168;
      }
      if ((0.0 < fVar27) && (local_res18 != 0)) {
        FUN_012bcdc0(param_1,param_3,fVar25,fVar27);
        uVar19 = in_RCX;
      }
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x60);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x60);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar5 = *(char *)(lVar12 + 0x61);
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x70);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x70);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar6 = *(char *)(lVar12 + 0x61);
      lVar13 = *arg1;
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar13 = *arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      lVar12 = *(int64_t *)(lVar13 + 0x68);
      pvVar11 = _pthread_getspecific((void*)uVar19);
      if (pvVar11 != (void *)0x0) {
        lVar12 = *(int64_t *)(lVar13 + 0x68);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
        }
      }
      cVar7 = *(char *)(lVar12 + 0x61);
      if (((cVar5 != '\0') || (cVar6 != '\0')) || (cVar7 != '\0')) {
        dVar29 = (double)local_b8 * dVar9;
        local_3c = g_02390d00;
        if (g_02394274 <= *(float *)(this_ptr + 0x2f0)) {
          if (*(double *)(this_ptr + 0x2e8) < dVar29) {
            fVar26 = (float)(dVar29 - *(double *)(this_ptr + 0x2e8)) /
                     *(float *)(this_ptr + 0x2f0);
            local_3c = 0.0;
            if (0.0 <= fVar26) {
              local_3c = fVar26;
            }
            if (g_02390124 < local_3c) {
              local_3c = g_02390124;
            }
          }
        }
        local_b8 = CONCAT44(local_b8._4_4_,
                            (float)(dVar29 - (double)*(int64_t *)(this_ptr + 0x2d0) * dVar9));
        iVar24 = 0;
        do {
          pVar18 = (void*)uVar19;
          if (iVar24 == 0) {
            if (cVar5 != '\0') {
              lVar13 = *arg1;
              pvVar11 = _pthread_getspecific(pVar18);
              if (pvVar11 != (void *)0x0) {
                lVar13 = *arg1;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  lVar13 = *(int64_t *)
                            (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              lVar13 = *(int64_t *)(lVar13 + 0x60);
joined_r0x012bc65d:
              if (lVar13 == 0) goto LAB_012bc7d0;
LAB_012bc6c3:
              FUN_00d50b00();
              bVar10 = false;
              lVar12 = *(int64_t *)(this_ptr + 0x2d0);
              goto joined_r0x012bc6da;
            }
          }
          else {
            if (iVar24 == 2) {
              if (cVar7 == '\0') break;
              lVar13 = *arg1;
              pvVar11 = _pthread_getspecific(pVar18);
              if (pvVar11 != (void *)0x0) {
                lVar13 = *arg1;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  lVar13 = *(int64_t *)
                            (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              lVar13 = *(int64_t *)(lVar13 + 0x68);
              if (lVar13 != 0) goto LAB_012bc6c3;
LAB_012bc7d0:
              lVar12 = *(int64_t *)(this_ptr + 0x2d0);
            }
            else {
              if (iVar24 == 1) {
                if (cVar6 != '\0') {
                  lVar13 = *arg1;
                  pvVar11 = _pthread_getspecific(pVar18);
                  if (pvVar11 != (void *)0x0) {
                    lVar13 = *arg1;
                    lVar12 = FUN_00e8b990();
                    if (lVar12 != 0) {
                      lVar13 = *(int64_t *)
                                (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                    }
                  }
                  lVar13 = *(int64_t *)(lVar13 + 0x70);
                  goto joined_r0x012bc65d;
                }
                goto LAB_012bc590;
              }
              lVar12 = *(int64_t *)(this_ptr + 0x2d0);
            }
            bVar10 = true;
            lVar13 = 0;
joined_r0x012bc6da:
            if (lVar12 < 0) {
              pvVar11 = _pthread_getspecific((int)uVar19);
              lVar12 = lVar13;
              if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                lVar12 = *(int64_t *)
                          (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
              }
              fVar26 = *(float *)(lVar12 + 0x5c);
              pvVar11 = _pthread_getspecific((void*)uVar19);
              lVar12 = lVar13;
              if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                lVar12 = *(int64_t *)
                          (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
              }
              if (*(float *)(lVar12 + 0x44) <= fVar26) {
                pvVar11 = _pthread_getspecific((void*)uVar19);
                lVar12 = lVar13;
                if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  lVar12 = *(int64_t *)
                            (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
                }
                fVar26 = *(float *)(lVar12 + 0x44);
              }
              else {
                pvVar11 = _pthread_getspecific((void*)uVar19);
                if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                  fVar26 = *(float *)(lVar13 + 0x5c);
                }
                else {
                  fVar26 = *(float *)(*(int64_t *)
                                       (lVar13 + 0x20 +
                                       (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x5c);
                }
              }
              if (iVar24 == 0) goto LAB_012bc9b0;
LAB_012bc73e:
              if (iVar24 == 2) {
                if (g_0239424c <= local_3c) {
                  if (*(char *)(this_ptr + 0x2e0) == '\0') {
                    pvVar11 = _pthread_getspecific((void*)uVar19);
                    if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                      if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44)
                         ) goto LAB_012bcc4a;
                      goto LAB_012bc8f4;
                    }
                    pfVar1 = (float *)(*(int64_t *)
                                        (lVar13 + 0x20 +
                                        (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                    if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc8f4;
LAB_012bcc4a:
                    *(float *)(this_ptr + 0x2fc) = fVar26;
                    if (fVar26 <= g_0239424c) goto joined_r0x012bcbc0;
                  }
                  else {
LAB_012bc8f4:
                    if (*(float *)(this_ptr + 0x2fc) <= g_0239424c) goto joined_r0x012bcbc0;
                  }
                  pvVar11 = _pthread_getspecific((void*)uVar19);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                }
              }
              else {
                if (iVar24 != 1) goto joined_r0x012bcbc0;
                if (g_0239424c <= local_3c) {
                  if (*(char *)(this_ptr + 0x2e0) == '\0') {
                    pvVar11 = _pthread_getspecific((void*)uVar19);
                    if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                      if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44)
                         ) goto LAB_012bcc19;
                      goto LAB_012bc771;
                    }
                    pfVar1 = (float *)(*(int64_t *)
                                        (lVar13 + 0x20 +
                                        (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                    if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc771;
LAB_012bcc19:
                    *(float *)(this_ptr + 0x2f8) = fVar26;
                    fVar27 = fVar26;
                    if (fVar26 <= g_0239424c) goto LAB_012bcb89;
                  }
                  else {
LAB_012bc771:
                    fVar27 = *(float *)(this_ptr + 0x2f8);
                    if (*(float *)(this_ptr + 0x2f8) <= g_0239424c) goto LAB_012bcb89;
                  }
                  pvVar11 = _pthread_getspecific((void*)uVar19);
                  lVar12 = lVar13;
                  if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    lVar12 = *(int64_t *)
                              (lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
                  }
                  fVar26 = fVar27 + (*(float *)(lVar12 + 0x44) - *(float *)(this_ptr + 0x2f8)) *
                                    local_3c;
                }
LAB_012bcb89:
                _exp2f((fVar26 + g_02390d00) * g_023b1608);
              }
joined_r0x012bcbc0:
              if ((bool)(bVar10 | lVar13 == 0)) goto LAB_012bc590;
            }
            else {
              pvVar11 = _pthread_getspecific((int)uVar19);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar26 = (float)FUN_0188f4f0((uint32_t)local_b8);
              if (iVar24 != 0) goto LAB_012bc73e;
LAB_012bc9b0:
              if (g_0239424c <= local_3c) {
                if (*(char *)(this_ptr + 0x2e0) == '\0') {
                  pvVar11 = _pthread_getspecific((void*)uVar19);
                  if ((pvVar11 == (void *)0x0) || (lVar12 = FUN_00e8b990(), lVar12 == 0)) {
                    if (*(float *)(lVar13 + 0x44) <= fVar26 && fVar26 != *(float *)(lVar13 + 0x44))
                    goto LAB_012bcab5;
                    goto LAB_012bc9cb;
                  }
                  pfVar1 = (float *)(*(int64_t *)
                                      (lVar13 + 0x20 +
                                      (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8) + 0x44);
                  if (fVar26 < *pfVar1 || fVar26 == *pfVar1) goto LAB_012bc9cb;
LAB_012bcab5:
                  *(float *)(this_ptr + 0x2f4) = fVar26;
                  if (fVar26 <= g_0239424c) goto LAB_012bca78;
                }
                else {
LAB_012bc9cb:
                  if (*(float *)(this_ptr + 0x2f4) <= g_0239424c) goto LAB_012bca78;
                }
                pvVar11 = _pthread_getspecific((void*)uVar19);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
              }
LAB_012bca78:
              if (bVar10 || lVar13 == 0) goto LAB_012bc590;
            }
            FUN_00d50b20();
          }
LAB_012bc590:
          iVar24 = iVar24 + 1;
        } while (iVar24 != 3);
        if ((0.0 <= local_3c) && (*(char *)(this_ptr + 0x2e0) == '\0')) {
          *(void*)(this_ptr + 0x2e0) = 1;
        }
      }
      goto LAB_012bb121;
    }
  }
  local_f8 = 0;
  local_c0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_a0 = 0;
  uVar28 = g_023908e0;
  uVar30 = g_023908e0;
LAB_012bb121:
  FUN_012bd760(param_1,uVar28,uVar30,0);
  return;
}

