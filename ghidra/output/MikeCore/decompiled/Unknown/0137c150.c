// Function: FUN_0137c150
// Address: 0137c150
// Size: 507 bytes
// Class: Unknown


void FUN_0137c150(pthread_key_t param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  void *pvVar5;
  float *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  longlong local_48;
  char local_40;
  float local_38;
  float local_34;
  
  uVar7 = FUN_0137bae0();
  *param_2 = uVar7;
  *unaff_RSI = NAN;
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  if (0 < *(int *)(lVar1 + 0xc)) {
    local_34 = 0.0;
    lVar6 = 0;
    local_38 = 0.0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_014bc070();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013de9b0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_013de3b0();
        local_34 = local_34 + fVar8 * (float)dVar3;
        local_38 = local_38 + (float)dVar3;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar1 + 0xc));
    if (DAT_02394274 <= local_38) {
      *unaff_RSI = local_34 / local_38;
    }
  }
  FUN_00d50b20();
  return;
}


