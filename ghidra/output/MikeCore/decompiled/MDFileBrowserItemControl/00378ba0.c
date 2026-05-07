// Function: FUN_00378ba0
// Address: 00378ba0
// Size: 2665 bytes
// Class: MDFileBrowserItemControl


/* WARNING: Removing unreachable block (ram,0x00379005) */
/* WARNING: Removing unreachable block (ram,0x00378f13) */
/* WARNING: Removing unreachable block (ram,0x00378f1f) */
/* WARNING: Removing unreachable block (ram,0x003791be) */
/* WARNING: Removing unreachable block (ram,0x003791cb) */
/* WARNING: Removing unreachable block (ram,0x00378cc1) */
/* WARNING: Removing unreachable block (ram,0x00378cca) */
/* WARNING: Removing unreachable block (ram,0x003790ac) */
/* WARNING: Removing unreachable block (ram,0x003790b8) */
/* WARNING: Removing unreachable block (ram,0x003790e8) */
/* WARNING: Removing unreachable block (ram,0x003790f4) */
/* WARNING: Removing unreachable block (ram,0x00378da7) */
/* WARNING: Removing unreachable block (ram,0x00378dd0) */
/* WARNING: Removing unreachable block (ram,0x00378da9) */
/* WARNING: Removing unreachable block (ram,0x00378dd2) */
/* WARNING: Removing unreachable block (ram,0x00379010) */
/* WARNING: Removing unreachable block (ram,0x00379030) */
/* WARNING: Removing unreachable block (ram,0x00379012) */
/* WARNING: Removing unreachable block (ram,0x00379032) */

void FUN_00378ba0(void)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  plVar9 = local_68;
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_68 + 0x450))();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_0037c170();
    local_c8 = local_40;
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    FUN_0037c870();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = local_68;
    FUN_01c19c80();
    FUN_01c19d80();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    FUN_0037c960();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = -1;
      while( true ) {
        lVar5 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) <= local_50) break;
        local_68 = *(longlong **)(plVar9[2] + 8 + lVar5 * 8);
        local_40 = local_68;
        FUN_0038ad10();
        pplVar8 = (longlong **)&DAT_02802688;
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar8 = &local_40;
          if (cVar4 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar8 != (longlong *)0x0) {
          FUN_01c0b7c0();
          plVar10 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_40 = plVar10;
          local_38 = '\0';
          cVar4 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            FUN_01c19c80();
            FUN_01c19e20();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01c0b7c0();
            plVar10 = local_80;
            if (local_78 == '\0') {
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_40 = plVar10;
            local_38 = '\0';
            FUN_00d23f50();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      FUN_0038d270();
      plVar9 = local_88;
    }
    pcVar2 = DAT_02664d88;
    plVar10 = (longlong *)0x0;
    if (plVar9 != (longlong *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = -1;
      while( true ) {
        lVar5 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) <= local_50) break;
        local_68 = *(longlong **)(plVar9[2] + 8 + lVar5 * 8);
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02664d70;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *(undefined8 *)((longlong)puVar6 + 0x1d) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x25) = 0;
        (*pcVar2)();
        FUN_01c0b7f0();
        FUN_01c19c80();
        FUN_01c19db0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00115910();
      plVar10 = local_88;
    }
    FUN_0037ca50();
    if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01c19c80();
    FUN_01c19d80();
    local_a0 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_a0 = '\x01';
    local_a8 = local_68;
    FUN_01c23a60();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0037cca0();
    FUN_01c19c80();
    FUN_01c19d80();
    iVar1 = *(int *)((longlong)local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (longlong *)unaff_RDI[0x2b];
    if (iVar1 == 0) {
      if (plVar9 == (longlong *)0x0) {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_0006daf0();
        *(undefined4 *)(puVar7 + 0x27) = 0;
        puVar7[0x2e] = 0;
        *(undefined4 *)(puVar7 + 0x2f) = 0;
        puVar7[0x30] = 0;
        *(undefined1 *)(puVar7 + 0x31) = 0;
        puVar7[0x28] = 0;
        puVar7[0x29] = 0;
        *(undefined4 *)(puVar7 + 0x2a) = 0;
        puVar7[0x2b] = 0;
        puVar7[0x2c] = 0;
        *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
        puVar7[0x35] = 0;
        puVar7[0x36] = 0;
        puVar7[0x37] = 0;
        puVar7[0x38] = 0;
        *puVar7 = &DAT_02683800;
        puVar7[2] = &DAT_026842c8;
        puVar7[0x39] = 0;
        puVar7[0x3a] = 0;
        (*DAT_02683818)();
        puVar6 = (undefined8 *)unaff_RDI[0x2b];
        if (puVar6 == puVar7) {
          FUN_00d50b20();
        }
        else {
          unaff_RDI[0x2b] = (longlong)puVar7;
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        lVar5 = DAT_026f6f70;
        plVar9 = (longlong *)unaff_RDI[0x2b];
        if (DAT_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_02704018;
        if (DAT_02704018 != 0) {
          FUN_00d50b00();
        }
        local_100 = lVar3;
        local_f8 = '\x01';
        local_f0 = 0;
        local_e8 = '\0';
        FUN_00d31230(&local_f0,&local_100);
        local_90 = 0;
        if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_90 = '\x01';
        local_98 = local_68;
        (**(code **)(*plVar9 + 0x968))();
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x9c8))();
        plVar9 = (longlong *)unaff_RDI[0x2b];
        FUN_01e3f820();
        (**(code **)(*plVar9 + 0x4d0))();
        (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x558))();
        plVar9 = (longlong *)unaff_RDI[0x1d];
        local_d8 = 0;
        local_e0 = unaff_RDI[0x2b];
        if (local_e0 != 0) {
          FUN_00d50b00();
        }
        local_d8 = '\x01';
        (**(code **)(*plVar9 + 0x450))();
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x478))();
      FUN_00d50130();
      if (unaff_RDI[0x2b] != 0) {
        unaff_RDI[0x2b] = 0;
        FUN_00d50b20();
      }
    }
    plVar9 = (longlong *)unaff_RDI[2];
    (**(code **)(*unaff_RDI + 0x698))();
    (**(code **)(*plVar9 + 0x9b8))();
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_d0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


