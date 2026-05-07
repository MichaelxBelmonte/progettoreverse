// Function: FUN_00623170
// Address: 00623170
// Size: 1032 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x006234a3) */
/* WARNING: Removing unreachable block (ram,0x006234ac) */
/* WARNING: Removing unreachable block (ram,0x0062342f) */
/* WARNING: Removing unreachable block (ram,0x0062343b) */
/* WARNING: Removing unreachable block (ram,0x00623569) */
/* WARNING: Removing unreachable block (ram,0x00623572) */
/* WARNING: Removing unreachable block (ram,0x006231c2) */
/* WARNING: Removing unreachable block (ram,0x006231cb) */
/* WARNING: Removing unreachable block (ram,0x00623283) */
/* WARNING: Removing unreachable block (ram,0x00623290) */
/* WARNING: Removing unreachable block (ram,0x00623367) */
/* WARNING: Removing unreachable block (ram,0x00623390) */
/* WARNING: Removing unreachable block (ram,0x00623369) */
/* WARNING: Removing unreachable block (ram,0x00623392) */

ulonglong FUN_00623170(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong *local_98;
  char local_90;
  longlong *local_70;
  char local_68;
  int local_58;
  longlong local_40;
  char local_38;
  longlong lVar7;
  
  plVar1 = local_70;
  (**(code **)(*unaff_RDI + 0x5d8))();
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_006231d0;
    }
  }
  else if (local_70 != (longlong *)0x0) {
LAB_006231d0:
    FUN_006f4810();
    FUN_002eacb0();
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)((longlong)local_70 + 0xc) == 0) {
LAB_00623244:
      uVar8 = 0;
LAB_00623246:
      FUN_00d50b20();
    }
    else {
      FUN_006f3f00();
      cVar2 = FUN_00788fb0();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') goto LAB_00623244;
      FUN_0063f230();
      if (local_70 != (longlong *)0x0) {
        FUN_0063f230();
        uVar3 = FUN_00212c70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        uVar8 = (ulonglong)uVar3 ^ 1;
        if ((char)uVar3 == '\0') goto LAB_0062330d;
        goto LAB_00623246;
      }
      uVar8 = 1;
LAB_0062330d:
      if (param_2 == '\0') goto LAB_00623246;
      local_70 = (longlong *)0x0;
      local_58 = -1;
      while( true ) {
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)((longlong)plVar1 + 0xc) <= local_58) break;
        lVar7 = *(longlong *)((longlong)plVar1 + 0x10);
        local_70 = *(longlong **)(lVar7 + 8 + lVar4 * 8);
        FUN_006f3f00();
        pVar6 = (pthread_key_t)lVar7;
        (**(code **)(*local_98 + 0x628))();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a64d0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      FUN_006f3f00();
      FUN_0074a910();
      FUN_006f4810();
      FUN_006f4810();
      FUN_01beea30();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*local_70 + 0x9d0))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      if (plVar1 != (longlong *)0x0) goto LAB_00623246;
    }
    FUN_00d50b20();
    goto LAB_0062325b;
  }
  uVar8 = 0;
LAB_0062325b:
  return uVar8 & 0xffffffff;
}


