// Function: FUN_01b1d080
// Address: 01b1d080
// Size: 1647 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b1d5ff) */
/* WARNING: Removing unreachable block (ram,0x01b1d54c) */
/* WARNING: Removing unreachable block (ram,0x01b1d555) */
/* WARNING: Removing unreachable block (ram,0x01b1d648) */
/* WARNING: Removing unreachable block (ram,0x01b1d651) */
/* WARNING: Removing unreachable block (ram,0x01b1d215) */
/* WARNING: Removing unreachable block (ram,0x01b1d21e) */

ulonglong FUN_01b1d080(undefined8 param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(unaff_RDI + 0x315) == '\0') || (*(char *)(unaff_RDI + 0x316) == '\0')) {
LAB_01b1d1e1:
    uVar10 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b1d1e1;
      FUN_00d50b00();
      if (*unaff_RSI != 0) goto LAB_01b1d0f4;
LAB_01b1d1da:
      uVar10 = 0;
    }
    else {
      if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b1d1e1;
      if (*unaff_RSI == 0) goto LAB_01b1d1da;
LAB_01b1d0f4:
      if (param_2 == '\0') {
        FUN_01caeae0();
        local_138 = unaff_RSI;
        if (local_58 == '\0') {
          if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01b1d223;
          }
        }
        else if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
LAB_01b1d223:
          puVar5 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar9 = 0x25795a8;
          *puVar5 = &DAT_025795a8;
          (*DAT_025795c0)();
          if (*(int *)(unaff_RDI + 0x194) == -1000000) {
            pvVar6 = _pthread_getspecific(pVar9);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar8 = (longlong *)
                       in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            lVar7 = DAT_027e45c8;
            if (DAT_027e45c8 != 0) {
              FUN_00d50b00();
            }
            local_128 = lVar7;
            local_120 = '\x01';
            local_118 = 0;
            local_110 = '\0';
            (**(code **)(*plVar8 + 0x3c0))(&local_128,0x3c,&local_118);
            if (local_58 == '\0') {
              if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00d8dbf0();
            if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar6 = _pthread_getspecific(pVar9);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar8 = (longlong *)
                       in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            lVar7 = DAT_027e45c8;
            uVar1 = *(undefined4 *)(unaff_RDI + 0x194);
            if (DAT_027e45c8 != 0) {
              FUN_00d50b00();
            }
            local_108 = lVar7;
            local_100 = '\x01';
            local_f8 = 0;
            local_f0 = '\0';
            (**(code **)(*plVar8 + 0x3c8))(&local_108,uVar1,&local_f8);
            if (local_58 == '\0') {
              if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00d8dbf0();
            if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
          plVar8 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          (**(code **)(*plVar8 + 0x18))();
          lVar7 = DAT_027e3ce0;
          local_e0 = '\0';
          local_e8 = puVar5;
          if (DAT_027e3ce0 != 0) {
            FUN_00d50b00();
          }
          FUN_00ca0840();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          lVar4 = DAT_027e4590;
          if (DAT_027e4590 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_027e3d50;
          local_d8 = lVar4;
          local_d0 = '\x01';
          if (DAT_027e3d50 != 0) {
            FUN_00d50b00();
          }
          local_c8 = lVar3;
          local_c0 = '\x01';
          local_b0 = '\0';
          local_b8 = plVar8;
          FUN_00d31230(&local_b8,&local_c8);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          FUN_01d64eb0();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          uVar10 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          FUN_00d50b20();
          goto LAB_01b1d6be;
        }
      }
      else {
        FUN_00d50b00();
        *(int *)(unaff_RDI + 0x2fc) = *(int *)(unaff_RDI + 0x2fc) + 1;
        FUN_01b40210();
        FUN_00d50b00();
        FUN_01acf890();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01af6500();
        FUN_00d50b20();
      }
      uVar10 = CONCAT71((int7)((ulonglong)local_138 >> 8),1);
    }
LAB_01b1d6be:
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}


