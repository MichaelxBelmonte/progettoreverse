// Function: FUN_006dbc00
// Address: 006dbc00
// Size: 755 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x006dbebf) */
/* WARNING: Removing unreachable block (ram,0x006dbecc) */

ulonglong FUN_006dbc00(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong *local_38;
  
  FUN_006cb500();
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_006dbcfd;
    FUN_00d50b00();
    if (0 < *(int *)((longlong)plVar1 + 0xc)) goto LAB_006dbc5e;
LAB_006dbed6:
    plVar6 = (longlong *)0x0;
  }
  else {
    if (local_60 == (longlong *)0x0) {
LAB_006dbcfd:
      plVar6 = (longlong *)0x0;
      goto LAB_006dbef6;
    }
    if (*(int *)((longlong)local_60 + 0xc) < 1) goto LAB_006dbed6;
LAB_006dbc5e:
    FUN_01caeae0();
    FUN_01d66da0();
    lVar8 = DAT_02726d28;
    if (DAT_02726d28 != 0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_60;
    FUN_000175c0();
    plVar6 = local_60;
    FUN_000823a0();
    if (plVar6 == (longlong *)0x0) {
LAB_006dbce2:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_006dbce2;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_006dbed6;
    local_58 = '\0';
    local_60 = plVar6;
    local_38 = plVar6;
    iVar3 = FUN_00d237a0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar6 = (longlong *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == -1);
    if ((iVar3 == -1) && (param_2 != '\0')) {
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar1;
      local_40 = 0;
      local_48 = 0;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          plVar6 = *(longlong **)(plVar1[2] + lVar8 * 8);
          local_60 = plVar6;
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          iVar3 = *(int *)(local_70 + 0xc);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (iVar3 == 0) {
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              param_1 = local_38;
            }
            FUN_01305350();
          }
          lVar8 = lVar8 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_000be170();
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_006dbef6:
  return (ulonglong)plVar6 & 0xffffffff;
}


