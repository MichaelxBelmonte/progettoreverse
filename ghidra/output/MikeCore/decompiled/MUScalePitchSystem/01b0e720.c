// Function: FUN_01b0e720
// Address: 01b0e720
// Size: 1432 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b0e79f) */
/* WARNING: Removing unreachable block (ram,0x01b0e7a8) */

ulonglong FUN_01b0e720(pthread_key_t param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  undefined8 unaff_R14;
  undefined4 uVar7;
  float fVar8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_98;
  longlong *local_90;
  float local_84;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  cVar1 = *(char *)((longlong)unaff_RDI + 0x315);
  if ((cVar1 == '\0') || (param_2 == '\0')) goto LAB_01b0ec8e;
  FUN_01caeae0();
  if (local_58 == '\0') {
    if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b0ec8e;
    FUN_00d50b00();
  }
  else if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b0ec8e;
  FUN_00d50b00();
  *(int *)((longlong)unaff_RDI + 0x2fc) = *(int *)((longlong)unaff_RDI + 0x2fc) + 1;
  uVar7 = FUN_01d66da0();
  local_e0 = DAT_027e1430;
  if (DAT_027e1430 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_d8 = '\x01';
  pplVar6 = &local_70;
  FUN_000175c0(uVar7,&local_e0);
  plVar3 = local_70;
  FUN_00053ac0();
  if (plVar3 == (longlong *)0x0) {
LAB_01b0e860:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b0e860;
  }
  local_90 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_01d66da0();
  local_d0 = DAT_027e3bd0;
  if (DAT_027e3bd0 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  pplVar6 = &local_70;
  FUN_000175c0(uVar7,&local_d0);
  plVar3 = local_70;
  FUN_00053ac0();
  if (plVar3 == (longlong *)0x0) {
LAB_01b0e94b:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b0e94b;
  }
  local_98 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_98 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 == (longlong *)0x0) {
    if (local_98 != (longlong *)0x0) {
      FUN_00d459e0();
      FUN_017736a0();
      goto LAB_01b0ec54;
    }
  }
  else {
    local_84 = (float)FUN_00d459e0();
    FUN_01ad3cb0();
    plVar3 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01b0e9fb;
      }
    }
    else {
LAB_01b0e9fb:
      if ((plVar3 == (longlong *)0x0) || ((local_84 == 0.0 && (!NAN(local_84))))) {
        if (plVar3 == (longlong *)0x0) goto LAB_01b0ec48;
      }
      else {
        FUN_01af1380();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_01770220();
        FUN_01770230(fVar8 + local_84);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01b07460();
        *(float *)((longlong)unaff_RDI + 0x1e4) = local_84;
        (**(code **)(*unaff_RDI + 0x620))();
        FUN_01f27fe0();
        local_a8 = 0;
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        uVar7 = FUN_00d50b00();
        local_a8 = '\x01';
        local_c0 = 0;
        local_b8 = '\0';
        local_b0 = unaff_RDI + 0x2d;
        FUN_01f47190(uVar7,&local_c0);
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          (**(code **)(*local_b0 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
LAB_01b0ec48:
    if (local_98 != (longlong *)0x0) {
LAB_01b0ec54:
      FUN_00d50b20();
      if (local_90 == (longlong *)0x0) goto LAB_01b0ec72;
    }
    FUN_00d50b20();
  }
LAB_01b0ec72:
  FUN_01af6500();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_01b0ec8e:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


