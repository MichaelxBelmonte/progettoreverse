// Function: FUN_01349890
// Address: 01349890
// Size: 725 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x013499e7) */
/* WARNING: Removing unreachable block (ram,0x013499f0) */

void FUN_01349890(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  longlong *local_48;
  char local_40;
  
  plVar5 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar5 != (longlong *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar5 = *(longlong **)(unaff_RDI + 0x38);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    uVar9 = (**(code **)(*plVar5 + 0x370))();
    lVar3 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar3 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar3 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_01347c70();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_01349a00;
              }
            }
            else if (local_48 != (longlong *)0x0) {
LAB_01349a00:
              pvVar2 = _pthread_getspecific(param_1);
              plVar5 = local_48;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
              fVar7 = (float)(**(code **)(*plVar5 + 0x3e0))();
              if (!NAN(fVar7)) {
                pvVar2 = _pthread_getspecific(param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bd640(uVar9);
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                if (NAN(fVar8)) {
                  pvVar2 = _pthread_getspecific(param_1);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bd3c0(fVar7);
                }
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                FUN_01348960(fVar8 - fVar7);
              }
              FUN_00d50b20();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar3 + 0xc));
      }
      FUN_001150f0();
      FUN_00d50b20();
    }
  }
  return;
}


