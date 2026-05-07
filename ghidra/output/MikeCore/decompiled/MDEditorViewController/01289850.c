// Function: FUN_01289850
// Address: 01289850
// Size: 1297 bytes
// Class: MDEditorViewController


void FUN_01289850(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  uint uVar8;
  ulonglong uVar9;
  
  lVar5 = *unaff_RDI;
  if (lVar5 != 0) {
    uVar8 = *(uint *)(lVar5 + 0xc);
    uVar9 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      lVar7 = 0;
      bVar1 = false;
      do {
        uVar8 = uVar8 - 1;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar8 * 8);
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
            lVar5 = *(longlong *)(lVar7 + 200);
          }
          else {
            lVar5 = *(longlong *)
                     (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                     200);
          }
          if (lVar5 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            if (!NAN(param_1)) {
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(longlong *)(lVar7 + 200);
              }
              else {
                lVar5 = *(longlong *)
                         (*(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
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
                lVar5 = *(longlong *)(lVar7 + 200);
              }
              else {
                lVar5 = *(longlong *)
                         (*(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
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
                lVar5 = *(longlong *)(lVar7 + 200);
              }
              else {
                lVar5 = *(longlong *)
                         (*(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
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
              lVar5 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
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
              lVar5 = *(longlong *)(lVar7 + 200);
            }
            else {
              lVar5 = *(longlong *)
                       (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8)
                       + 200);
            }
            if (lVar5 != 0) {
              FUN_00d50b00();
              FUN_00d50b20();
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(longlong *)(lVar7 + 200);
              }
              else {
                lVar5 = *(longlong *)
                         (*(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
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
        if ((longlong)uVar9 < 2) {
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
        lVar5 = *unaff_RDI;
      } while( true );
    }
  }
  return;
}


