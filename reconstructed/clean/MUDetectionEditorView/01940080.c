// Function: FUN_01940080
// Address: 01940080
// Size: 1457 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01940080(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  float fVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  float local_88;
  int64_t local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb;
  
  FUN_01e3f820();
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 5) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(&UNK_000017c8 + *this_ptr))();
    if ((char)this_ptr[0xb6] != '\0') {
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      (**(code **)(*this_ptr + 0xab8))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      (**(code **)(&UNK_000016c8 + *this_ptr))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
        *(void*)((int64_t)this_ptr + 0x5bc) = uVar11;
        *(void*)((int64_t)this_ptr + 0x5c4) = 1;
LAB_019401b7:
        FUN_00d50b20();
      }
      else {
        if (local_48 == 0) {
          *(void*)((int64_t)this_ptr + 0x5c4) = 0;
          goto LAB_019401cc;
        }
        *(void*)((int64_t)this_ptr + 0x5bc) = uVar11;
        *(void*)((int64_t)this_ptr + 0x5c4) = 1;
        if (local_48 != 0) goto LAB_019401b7;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
LAB_019401cc:
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    (**(code **)(&UNK_00001668 + *this_ptr))();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_01326de0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 3) {
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(&g_00001730 + *this_ptr))();
      bVar4 = FUN_00d05410();
      if (bVar4 == 0) {
        (**(code **)(&g_00001738 + *this_ptr))();
        cVar5 = FUN_00d05410();
        if (cVar5 == '\0') goto LAB_01940545;
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514c0();
        *(void*)(this_ptr + 0xae) = uVar9;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514d0();
        *(void*)((int64_t)this_ptr + 0x56c) = uVar9;
      }
      local_88 = (float)(**(code **)(*this_ptr + 0xc00))();
      plVar8 = this_ptr + 0xae;
      lVar1 = (uint64_t)(bVar4 ^ 1) * 4 + 0x56c;
      do {
        (**(code **)(*this_ptr + 0x658))();
        lVar2 = *arg1;
        if (lVar2 == local_48) {
          if (((char)arg1[1] == '\0') && (local_48 != 0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_019404cc;
            }
LAB_01940482:
            *(void*)(arg1 + 1) = 1;
            local_40 = '\0';
          }
          lVar2 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_40 != '\0') {
            *arg1 = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01940482;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_019404cc:
          *(void*)(arg1 + 1) = 1;
          lVar2 = *arg1;
        }
        if (lVar2 == 0) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
LAB_01940596:
          pvVar7 = _pthread_getspecific(param_1);
          if (bVar4 == 0) {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013548b0();
          }
          else {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01354950();
            plVar8 = (int64_t *)((int64_t)this_ptr + 0x56c);
          }
          *(void*)plVar8 = 0x7fc00000;
          (**(code **)(*this_ptr + 0x620))();
          return;
        }
        iVar6 = FUN_01d3a5a0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_01940596;
        FUN_01d3abf0();
        auVar12._0_8_ = FUN_01e466c0();
        auVar12._8_8_ = extraout_XMM0_Qb;
        if ((float)((uint64_t)auVar12._0_8_ >> 0x20) < g_023908d8) {
          insertps(auVar12,ZEXT416((uint)g_023908d8),0x10);
        }
        fVar10 = (float)(**(code **)(*this_ptr + 0xc00))();
        *(float *)((int64_t)this_ptr + lVar1) =
             (fVar10 - local_88) + *(float *)((int64_t)this_ptr + lVar1);
        (**(code **)(*this_ptr + 0x620))();
        local_88 = fVar10;
      } while( true );
    }
  }
LAB_01940545:
  FUN_0199c1c0();
  return;
}

