// Function: FUN_01bb2610
// Address: 01bb2610
// Size: 1309 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x01bb2816) */
/* WARNING: Removing unreachable block (ram,0x01bb2822) */
/* WARNING: Removing unreachable block (ram,0x01bb2830) */
/* WARNING: Removing unreachable block (ram,0x01bb283c) */
/* WARNING: Removing unreachable block (ram,0x01bb26b0) */
/* WARNING: Removing unreachable block (ram,0x01bb26b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01bb2610(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  float fVar9;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  float local_34;
  
  (**(code **)(*unaff_RDI + 0x630))();
  plVar4 = local_60;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x630))();
    FUN_00d23310();
    plVar4 = local_60;
    local_88 = local_58 != '\0';
    local_90 = local_60;
    if ((bool)local_88) {
      local_58 = '\0';
    }
    FUN_0006e1c0();
    if (plVar4 == (longlong *)0x0) {
LAB_01bb26e5:
      pplVar3 = &DAT_02802688;
      plVar5 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01bb26f5;
LAB_01bb270b:
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bb26e5;
      pplVar3 = &local_90;
      plVar5 = local_90;
      if (local_88 == '\0') goto LAB_01bb270b;
LAB_01bb26f5:
      *(undefined1 *)(pplVar3 + 1) = 0;
    }
    if ((local_88 != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      uVar7 = (undefined7)((ulonglong)plVar5 >> 8);
      uVar6 = CONCAT71(uVar7,1);
      if (param_2 != '\0') {
        (**(code **)(*unaff_RDI + 0x630))();
        plVar4 = local_60;
        local_80 = local_60;
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            local_80 = (longlong *)0x0;
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
        }
        if (*(int *)((longlong)plVar4 + 0xc) == 1) {
          if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            _DAT_026cd478 = FUN_00d4fe50();
            DAT_026cd460 = "GNList";
            _DAT_026cd468 = 0x20;
            _DAT_026cd470 = FUN_00018210;
            _DAT_026cd480 = 0;
            uRam00000000026cd488 = 0;
            _DAT_026cd490 = 0;
            _DAT_026cd508 = 0;
            uRam00000000026cd510 = 0;
            _DAT_026cd518 = 0;
            DAT_026cd51a = 6;
            _DAT_026cd498 = 0;
            uRam00000000026cd4a0 = 0;
            _DAT_026cd4a8 = 0;
            uRam00000000026cd4b0 = 0;
            _DAT_026cd4b8 = 0;
            uRam00000000026cd4c0 = 0;
            _DAT_026cd4c8 = 0;
            uRam00000000026cd4d0 = 0;
            _DAT_026cd4d8 = 0;
            uRam00000000026cd4e0 = 0;
            _DAT_026cd4e8 = 0;
            uRam00000000026cd4f0 = 0;
            _DAT_026cd4f8 = 0;
            uRam00000000026cd500 = 0;
            DAT_026cd523 = 0;
            _DAT_026cd51b = 0;
            ___cxa_guard_release();
          }
          uVar6 = CONCAT71(uVar7,1);
          (**(code **)(*plVar4 + 0x360))();
          cVar1 = FUN_00e85ea0();
          uVar8 = extraout_XMM0_Da;
          if (cVar1 != '\0') {
            FUN_0006e1c0();
            FUN_00e8da30();
            uVar8 = extraout_XMM0_Da_00;
          }
          FUN_01a296f0(uVar8,0);
          plVar4 = (longlong *)unaff_RDI[0x20];
          (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x970))();
          local_70 = local_60;
          local_68 = 0;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_68 = '\x01';
          fVar9 = (float)(**(code **)(*plVar4 + 0x380))();
          local_34 = (float)_logf(fVar9 * DAT_02394204);
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar4 = local_80;
          if (local_80 != (longlong *)0x0) {
            local_58 = '\0';
            local_60 = (longlong *)0x0;
            local_50 = local_80;
            local_40 = 0;
            local_48 = 0;
            if (0 < *(int *)((longlong)local_80 + 0xc)) {
              local_34 = local_34 * DAT_02394208;
              uVar6 = 0;
              do {
                plVar5 = *(longlong **)(plVar4[2] + uVar6 * 8);
                local_90 = plVar5;
                local_60 = plVar5;
                FUN_0006e1c0();
                pplVar3 = &DAT_02802688;
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x360))();
                  cVar1 = FUN_00e85ea0();
                  pplVar3 = &local_90;
                  if (cVar1 == '\0') {
                    pplVar3 = &DAT_02802688;
                  }
                }
                if ((*pplVar3 != (longlong *)0x0) && (cVar1 = FUN_01bb10c0(local_34), cVar1 != '\0')
                   ) {
                  FUN_01bae1e0(local_34,0,param_3,param_4,0);
                }
                uVar6 = uVar6 + 1;
                local_48 = CONCAT44(local_48._4_4_,(int)uVar6);
              } while ((int)uVar6 < *(int *)((longlong)plVar4 + 0xc));
            }
            FUN_002d7220();
            uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
          }
          (**(code **)(*unaff_RDI + 0x678))();
          if (plVar4 == (longlong *)0x0) goto LAB_01bb2a4c;
        }
        FUN_00d50b20();
      }
      goto LAB_01bb2a4c;
    }
  }
  uVar6 = 0;
LAB_01bb2a4c:
  return uVar6 & 0xffffffff;
}


