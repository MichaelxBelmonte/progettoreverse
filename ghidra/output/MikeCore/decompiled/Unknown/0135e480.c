// Function: FUN_0135e480
// Address: 0135e480
// Size: 943 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0135e7f5) */
/* WARNING: Removing unreachable block (ram,0x0135e7fe) */
/* WARNING: Removing unreachable block (ram,0x0135e81d) */
/* WARNING: Removing unreachable block (ram,0x0135e826) */

undefined8 * FUN_0135e480(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar9;
  double dVar10;
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong local_48;
  char local_40;
  undefined1 local_31;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  if (((*(longlong *)(unaff_RSI + 0x1f8) == 0) && (*(longlong *)(unaff_RSI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RSI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0141bab0();
    if (iVar1 == 3) goto LAB_0135e7b1;
  }
  plVar7 = (longlong *)*param_2;
  if (plVar7 != (longlong *)0x0) {
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      plVar7 = (longlong *)*param_2;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    local_60 = (**(code **)(*plVar7 + 0x3a0))();
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar9 = (double)FUN_014bb640();
    lVar4 = *(longlong *)(unaff_RSI + 0x40);
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar8 = 0;
      do {
        pVar5 = (pthread_key_t)puVar6;
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar8 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013de8d0();
        if (dVar10 < dVar9) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = (double)FUN_013dea30();
          if (dVar9 < dVar10) {
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar10 = (double)FUN_013de8d0();
            if (DAT_0240f100 < dVar9 - dVar10) {
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar10 = (double)FUN_013dea30();
              if (DAT_0240f100 < dVar10 - dVar9) {
                if (lVar4 != 0) {
                  FUN_00d50b00();
                  FUN_00d50b20();
                  local_31 = 0;
                  local_68 = 0;
                  local_70 = lVar4;
                  FUN_0135f200(local_60,&local_70,local_78,&local_31);
                  if (local_40 == '\0') {
                    if (local_48 == 0) goto LAB_0135e833;
                    FUN_00d50b00();
                  }
                  else if (local_48 == 0) goto LAB_0135e833;
                  FUN_00d21140();
                  FUN_00d21140();
                  FUN_00d50b20();
LAB_0135e833:
                  *unaff_RDI = puVar2;
                  *(undefined1 *)(unaff_RDI + 1) = 1;
                  FUN_00d50b20();
                  return unaff_RDI;
                }
                break;
              }
            }
          }
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        lVar4 = *(longlong *)(unaff_RSI + 0x40);
        puVar6 = (undefined *)(longlong)*(int *)(lVar4 + 0xc);
      } while (lVar8 < (longlong)puVar6);
    }
  }
LAB_0135e7b1:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


