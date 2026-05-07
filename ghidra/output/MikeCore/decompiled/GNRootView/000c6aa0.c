// Function: FUN_000c6aa0
// Address: 000c6aa0
// Size: 1823 bytes
// Class: GNRootView


void FUN_000c6aa0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong *local_40;
  char local_38;
  
  plVar10 = *(longlong **)(unaff_RDI + 0x158);
  (**(code **)(*plVar10 + 0x368))();
  bVar2 = true;
  if (*(longlong *)(unaff_RDI + 0x168) == 0) {
    local_48 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
    iVar4 = *(int *)(lVar1 + 0xc);
    if (iVar4 < 1) {
      local_48 = 0;
      bVar2 = true;
    }
    else {
      lVar9 = 0;
      local_a0 = plVar10;
      do {
        lVar8 = *(longlong *)(lVar1 + 0x10);
        local_48 = *(longlong *)(lVar8 + lVar9 * 8);
        if (*(longlong *)(local_48 + 0x308) == 0) {
          FUN_0051b4f0();
          plVar3 = local_40;
          pVar7 = (pthread_key_t)lVar8;
          plVar10 = (longlong *)*param_2;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = local_48;
          if (plVar3 == plVar10) {
            FUN_00d50b00();
            plVar10 = local_a0;
            if (*(longlong *)(lVar8 + 0x308) == 0) {
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00521db0();
              FUN_00757c60();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012caf10();
              local_88 = local_68;
              local_80 = 0;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_80 = '\x01';
              FUN_016cbba0();
              local_98 = local_58;
              local_90 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_90 = '\x01';
              FUN_0132d960();
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d403d0();
              lVar1 = DAT_027ebe30;
              if (DAT_027ebe30 != 0) {
                FUN_00d50b00();
              }
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0132d610();
              local_78 = local_58;
              local_70 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_70 = '\x01';
              local_f8 = '\0';
              local_100 = 0;
              FUN_00d40470(&local_100,&local_78,3,3);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            plVar5 = (longlong *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar5 + 0x18))();
            plVar3 = DAT_026de560;
            lVar1 = *param_1;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_e8 = '\0';
              local_f0 = lVar1;
              if (DAT_026de560 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_e8 != '\0') && (local_f0 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar3 = DAT_0270b8f0;
            lVar1 = *param_3;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_d8 = '\0';
              local_e0 = lVar1;
              if (DAT_0270b8f0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d403d0();
            local_d0 = DAT_026de568;
            if (DAT_026de568 != 0) {
              FUN_00d50b00();
            }
            local_c8 = '\x01';
            local_c0 = local_48;
            local_b8 = '\0';
            local_a8 = '\0';
            local_b0 = plVar5;
            FUN_00d40470(&local_b0,&local_c0,3,3);
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00b34cb0();
            plVar3 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                (**(code **)(*local_40 + 0x10))();
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  (**(code **)(*local_40 + 0x10))();
                  FUN_00d50b20();
                }
                goto LAB_000c6ef1;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_000c6ef1:
              (**(code **)(*plVar3 + 0x50))();
              (**(code **)(*plVar3 + 0x10))();
              FUN_00d50b20();
            }
            FUN_00d50b20();
            bVar2 = false;
            goto LAB_000c6f17;
          }
          iVar4 = *(int *)(lVar1 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      local_48 = 0;
      bVar2 = true;
      plVar10 = local_a0;
    }
  }
LAB_000c6f17:
  (**(code **)(*plVar10 + 0x378))();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


