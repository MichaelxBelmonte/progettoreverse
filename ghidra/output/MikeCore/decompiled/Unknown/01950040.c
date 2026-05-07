// Function: FUN_01950040
// Address: 01950040
// Size: 1674 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019506d1) */
/* WARNING: Removing unreachable block (ram,0x019506e1) */

void FUN_01950040(longlong **param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong **pplVar7;
  longlong *unaff_RDI;
  int iVar8;
  longlong local_138;
  char local_130;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_138 != 0) {
    if (0 < *(int *)(local_138 + 0xc)) {
      iVar8 = 0;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4ba0();
        lVar2 = DAT_027e0940;
        if (DAT_027e0940 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        plVar1 = local_40;
        FUN_002771e0();
        param_1 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          param_1 = &local_40;
          if (cVar4 == '\0') {
            param_1 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = *param_1;
        if (*(char *)(param_1 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(param_1 + 1) = 0;
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*unaff_RDI + 0x970))();
          lVar2 = DAT_026f6f70;
          if (DAT_026f6f70 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_02729588;
          if (DAT_02729588 != 0) {
            FUN_00d50b00();
          }
          local_f0 = lVar3;
          local_e8 = '\x01';
          local_e0 = 0;
          local_d8 = '\0';
          FUN_00d31230(&local_e0,&local_f0);
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_0197ce50();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          FUN_00d50b00();
          lVar2 = DAT_02729590;
          if (DAT_02729590 != 0) {
            FUN_00d50b00();
          }
          local_d0 = lVar2;
          local_c8 = '\x01';
          local_b8 = '\0';
          pplVar7 = &local_c0;
          local_c0 = plVar1;
          FUN_00d41430(pplVar7,&local_d0);
          pVar6 = (pthread_key_t)pplVar7;
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a7e0();
          FUN_00d403d0();
          FUN_00d50b00();
          lVar2 = DAT_02729590;
          if (DAT_02729590 != 0) {
            FUN_00d50b00();
          }
          local_b0 = lVar2;
          local_a8 = '\x01';
          local_98 = '\0';
          param_1 = &local_a0;
          local_a0 = plVar1;
          FUN_00d41040(param_1,&local_b0);
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x970))();
          local_90 = 0;
          local_88 = '\0';
          FUN_0197ce50();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x970))();
          FUN_0197c970();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_138 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  (**(code **)(&DAT_000017b8 + *unaff_RDI))();
  return;
}


