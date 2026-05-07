// Function: FUN_01a5b5e0
// Address: 01a5b5e0
// Size: 2371 bytes
// Class: MUTool
// String references:
//   "MUTool"

int64_t * FUN_01a5b5e0(uint32_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int iVar8;
  int64_t lVar9;
  int64_t **pplVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint32_t local_40;
  char local_31;
  
  local_78 = 0;
  bVar2 = false;
  plVar6 = (int64_t *)0x0;
  lVar9 = 0;
  cVar4 = '\0';
  local_40 = param_1;
  do {
    FUN_01e1f270();
    iVar8 = *(int *)((int64_t)local_58 + 0xc);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar8 <= local_78) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      local_31 = cVar4;
      goto LAB_01a5bc22;
    }
    FUN_01e1f270();
    lVar1 = *(int64_t *)(local_58[2] + local_78 * 8);
    if (lVar9 == lVar1) {
      lVar1 = lVar9;
      local_31 = cVar4;
      if ((cVar4 == '\0') && (lVar9 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      local_48 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_31 = '\x01';
      lVar1 = local_48;
      if ((cVar4 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
        lVar1 = local_48;
      }
    }
    local_48 = lVar1;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = local_48;
    if (((char)local_40 == '\0') || (cVar4 = FUN_01e26480(), cVar4 != '\0')) {
      uVar11 = FUN_01e26150();
      lVar9 = g_026f6e60;
      if (g_026f6e60 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_100 = lVar9;
      local_f8 = '\x01';
      FUN_000175c0(uVar11,&local_100);
      FUN_00d4efa0();
      FUN_00c7e7b0();
      local_f0 = *param_2;
      local_e8 = '\0';
      cVar4 = (**(code **)(*local_58 + 0x50))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_01e20210();
        FUN_01e1f2a0();
        uVar11 = FUN_01e26150();
        local_e0 = g_026f6e60;
        if (g_026f6e60 != 0) {
          uVar11 = FUN_00d50b00();
        }
        local_d8 = '\x01';
        pplVar10 = &local_58;
        FUN_000175c0(uVar11,&local_e0);
        plVar7 = local_58;
        if ((g_0272ffd0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_026f8f48 = FUN_00d4fe50();
          g_026f8f30 = "MUTool";
          g_026f8f38 = 0x38;
          g_026f8f40 = FUN_00274e70;
          g_026f8f50 = 0;
          ram_00000000026f8f58 = 0;
          g_026f8f60 = 0;
          g_026f8fd8 = 0;
          ram_00000000026f8fe0 = 0;
          g_026f8fe8 = 0;
          g_026f8fea = 1;
          g_026f8f68 = 0;
          ram_00000000026f8f70 = 0;
          g_026f8f78 = 0;
          ram_00000000026f8f80 = 0;
          g_026f8f88 = 0;
          ram_00000000026f8f90 = 0;
          g_026f8f98 = 0;
          ram_00000000026f8fa0 = 0;
          g_026f8fa8 = 0;
          ram_00000000026f8fb0 = 0;
          g_026f8fb8 = 0;
          ram_00000000026f8fc0 = 0;
          g_026f8fc8 = 0;
          ram_00000000026f8fd0 = 0;
          g_026f8ff3 = 0;
          g_026f8feb = 0;
          ___cxa_guard_release();
        }
        if (plVar7 == (int64_t *)0x0) {
          pplVar10 = &g_02802688;
        }
        else {
          (**(code **)(*plVar7 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') {
            pplVar10 = &g_02802688;
          }
        }
        *(void*)(this_ptr + 1) = 0;
        plVar7 = *pplVar10;
        if (*(char *)(pplVar10 + 1) == '\0') {
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *this_ptr = (int64_t)plVar7;
          *(void*)(this_ptr + 1) = 1;
          lVar9 = local_48;
        }
        else {
          *this_ptr = (int64_t)plVar7;
          *(void*)(this_ptr + 1) = 1;
          *(void*)(pplVar10 + 1) = 0;
          lVar9 = local_48;
        }
        local_48 = lVar9;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
LAB_01a5bc22:
        if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_31 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        return this_ptr;
      }
      for (iVar8 = 0; iVar5 = FUN_01e26080(), lVar9 = local_48, iVar8 < iVar5; iVar8 = iVar8 + 1) {
        FUN_01e26090(extraout_XMM0_Da,iVar8);
        plVar7 = local_58;
        if (local_58 == plVar6) {
          plVar7 = plVar6;
          bVar3 = bVar2;
          if ((bVar2) || (local_58 == (int64_t *)0x0)) goto joined_r0x01a5b909;
          bVar3 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01a5b8f5;
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar6 = plVar7;
LAB_01a5b8f5:
            plVar7 = plVar6;
            bVar3 = true;
          }
joined_r0x01a5b909:
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar3 = true;
          if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar3;
        plVar6 = plVar7;
        if (((char)local_40 == '\0') || (cVar4 = FUN_01e26480(), cVar4 != '\0')) {
          uVar11 = FUN_01e26150();
          lVar9 = g_026f6e60;
          if (g_026f6e60 != 0) {
            uVar11 = FUN_00d50b00();
          }
          local_d0 = lVar9;
          local_c8 = '\x01';
          FUN_000175c0(uVar11,&local_d0);
          FUN_00d4efa0();
          FUN_00c7e7b0();
          local_c0 = *param_2;
          local_b8 = '\0';
          cVar4 = (**(code **)(*local_58 + 0x50))();
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            FUN_01e20210();
            FUN_01e1f2a0();
            uVar11 = FUN_01e26150();
            local_b0 = g_026f6e60;
            if (g_026f6e60 != 0) {
              uVar11 = FUN_00d50b00();
            }
            local_a8 = '\x01';
            pplVar10 = &local_58;
            FUN_000175c0(uVar11,&local_b0);
            plVar7 = local_58;
            if ((g_0272ffd0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
              g_026f8f48 = FUN_00d4fe50();
              g_026f8f30 = "MUTool";
              g_026f8f38 = 0x38;
              g_026f8f40 = FUN_00274e70;
              g_026f8f50 = 0;
              ram_00000000026f8f58 = 0;
              g_026f8f60 = 0;
              g_026f8fd8 = 0;
              ram_00000000026f8fe0 = 0;
              g_026f8fe8 = 0;
              g_026f8fea = 1;
              g_026f8f68 = 0;
              ram_00000000026f8f70 = 0;
              g_026f8f78 = 0;
              ram_00000000026f8f80 = 0;
              g_026f8f88 = 0;
              ram_00000000026f8f90 = 0;
              g_026f8f98 = 0;
              ram_00000000026f8fa0 = 0;
              g_026f8fa8 = 0;
              ram_00000000026f8fb0 = 0;
              g_026f8fb8 = 0;
              ram_00000000026f8fc0 = 0;
              g_026f8fc8 = 0;
              ram_00000000026f8fd0 = 0;
              g_026f8ff3 = 0;
              g_026f8feb = 0;
              ___cxa_guard_release();
            }
            if (plVar7 == (int64_t *)0x0) {
              pplVar10 = &g_02802688;
              *(void*)(this_ptr + 1) = 0;
              plVar7 = g_02802688;
              if (g_02802690 == '\0') goto LAB_01a5bbbe;
LAB_01a5bb89:
              *this_ptr = (int64_t)plVar7;
              *(void*)(this_ptr + 1) = 1;
              *(void*)(pplVar10 + 1) = 0;
              lVar9 = local_48;
            }
            else {
              (**(code **)(*plVar7 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 == '\0') {
                pplVar10 = &g_02802688;
              }
              *(void*)(this_ptr + 1) = 0;
              plVar7 = *pplVar10;
              if (*(char *)(pplVar10 + 1) != '\0') goto LAB_01a5bb89;
LAB_01a5bbbe:
              if (plVar7 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *this_ptr = (int64_t)plVar7;
              *(void*)(this_ptr + 1) = 1;
              lVar9 = local_48;
            }
            local_48 = lVar9;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01a5bc22;
          }
        }
      }
    }
    local_78 = local_78 + 1;
    cVar4 = local_31;
  } while( true );
}

