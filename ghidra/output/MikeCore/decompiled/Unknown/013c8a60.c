// Function: FUN_013c8a60
// Address: 013c8a60
// Size: 510 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013c8b97) */
/* WARNING: Removing unreachable block (ram,0x013c8ba0) */

float FUN_013c8a60(pthread_key_t param_1)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  double dVar9;
  longlong *local_48;
  char local_40;
  float local_34;
  
  lVar1 = *(longlong *)(unaff_RDI + 200);
  if (lVar1 == 0) {
    local_34 = 0.0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_34 = 0.0;
    }
    else {
      local_34 = 0.0;
      iVar7 = 0;
      do {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_014bc070();
        fVar2 = local_34;
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc240();
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_013c8bb0;
            }
          }
          else if (local_48 != (longlong *)0x0) {
LAB_013c8bb0:
            pvVar4 = _pthread_getspecific(param_1);
            plVar6 = local_48;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar6 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            pvVar4 = _pthread_getspecific(param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_014bb310();
            dVar9 = (double)(**(code **)(*plVar6 + 0x3a8))(0,uVar8);
            FUN_00d50b20();
            fVar2 = (float)dVar9;
            if ((float)dVar9 <= local_34) {
              fVar2 = local_34;
            }
          }
        }
        local_34 = fVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c8b0();
  }
  return local_34;
}


