// Function: FUN_0165b1b0
// Address: 0165b1b0
// Size: 584 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x0165b2f7) */
/* WARNING: Removing unreachable block (ram,0x0165b3d3) */
/* WARNING: Removing unreachable block (ram,0x0165b3dc) */
/* WARNING: Removing unreachable block (ram,0x0165b304) */

void FUN_0165b1b0(ulonglong param_1,ulonglong param_2,pthread_key_t param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (*unaff_RSI == 0) {
    if (param_1 >> 0x20 == 0) {
      return;
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012502a0(param_1,param_2,0);
    return;
  }
  if (param_2 >> 0x20 == 0) {
    return;
  }
  uVar5 = param_1;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  pVar4 = (pthread_key_t)uVar5;
  FUN_00d4ff40();
  *puVar1 = &DAT_025f6568;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[9] = 0x100000000;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar6 = *unaff_RSI;
    lVar8 = puVar1[7];
    puVar7 = puVar1;
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  else {
    lVar6 = *unaff_RSI;
    lVar8 = ((undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4])[7];
    puVar7 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  puVar7[7] = lVar6;
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_0165b33b:
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar1 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(char *)(puVar1 + 8) = (char)param_3;
  pvVar2 = _pthread_getspecific(param_3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012502a0(param_1,param_2,0);
  FUN_00d50b20();
  return;
}


