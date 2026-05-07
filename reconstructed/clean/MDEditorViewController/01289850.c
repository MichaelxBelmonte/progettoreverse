// Function: FUN_01289850
// Address: 01289850
// Size: 1297 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_01289850(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  uint uVar8;
  uint64_t uVar9;
  
  lVar5 = *this_ptr;
  if (lVar5 != 0) {
    uVar8 = *(uint *)(lVar5 + 0xc);
    uVar9 = (uint64_t)uVar8;
    if (0 < (int)uVar8) {
      lVar7 = 0;
      bVar1 = false;
      do {
        uVar8 = uVar8 - 1;
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar8 * 8);
        pVar6 = uVar8;
        if (lVar7 == lVar5) {
          lVar5 = lVar7;
          bVar2 = bVar1;
          if ((!bVar1) && (lVar7 != 0)) {
            FUN_00d50b00();
            bVar2 = true;
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar2;
        lVar7 = lVar5;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01263cf0();
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            lVar5 = *(int64_t *)(lVar7 + 200);
          }
          else {
            lVar5 = *(int64_t *)
                     (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                     200);
          }
          if (lVar5 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            if (!NAN(param_1)) {
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152df00(param_1);
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152dd40();
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152dfb0();
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (!NAN(param_2)) {
            pvVar4 = _pthread_getspecific(pVar6);
            if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
              lVar5 = lVar7;
              if ((*(float *)(lVar7 + 0x9c) != param_2) ||
                 (NAN(*(float *)(lVar7 + 0x9c)) || NAN(param_2))) goto LAB_01289c13;
            }
            else {
              lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
              if ((*(float *)(lVar5 + 0x9c) != param_2) ||
                 (NAN(*(float *)(lVar5 + 0x9c)) || NAN(param_2))) {
LAB_01289c13:
                FUN_00d64850();
                *(float *)(lVar5 + 0x9c) = param_2;
                FUN_00d64910();
              }
            }
            pvVar4 = _pthread_getspecific(pVar6);
            if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
              lVar5 = *(int64_t *)(lVar7 + 200);
            }
            else {
              lVar5 = *(int64_t *)
                       (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8)
                       + 200);
            }
            if (lVar5 != 0) {
              FUN_00d50b00();
              FUN_00d50b20();
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152dfb0();
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        if ((int64_t)uVar9 < 2) {
          if (!bVar1) {
            return;
          }
          if (lVar7 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        uVar9 = uVar9 - 1;
        lVar5 = *this_ptr;
      } while( true );
    }
  }
  return;
}

