// Function: FUN_01bbcdd0
// Address: 01bbcdd0
// Size: 2232 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_01bbcdd0(code *param_1,int64_t *param_2)

{
  code *pcVar1;
  code *pcVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  void *pvVar9;
  void* pVar10;
  code **ppcVar11;
  code *pcVar12;
  int64_t *arg1;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  float extraout_XMM0_Db;
  code *local_130;
  uint8_t local_128;
  uint64_t local_120;
  code *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  uint64_t local_88;
  int64_t local_70;
  char local_68;
  code *local_60;
  int64_t local_58;
  char local_50;
  char local_41;
  code *local_40;
  char local_38;
  
  ppcVar11 = &local_40;
  uVar13 = FUN_01a58dc0();
  pcVar1 = local_40;
  if ((g_02732c90 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_05, iVar5 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = FUN_0034de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    uVar13 = ___cxa_guard_release();
  }
  if (pcVar1 == 0x0) {
LAB_01bbce32:
    ppcVar11 = (code **)&g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pcVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar13 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01bbce32;
  }
  pcVar1 = *ppcVar11;
  if (*(char *)(ppcVar11 + 1) == '\0') {
    if (pcVar1 != 0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(ppcVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != 0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (pcVar1 == 0x0) {
LAB_01bbd09e:
    local_a8 = *arg1;
    local_a0 = '\0';
    local_98 = *param_2;
    local_90 = '\0';
    uVar6 = FUN_01a58d30(uVar13,&local_98);
    uVar8 = (uint64_t)uVar6;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
LAB_01bbd10d:
    if (pcVar1 == 0x0) goto LAB_01bbd11a;
  }
  else {
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *(int64_t *)pcVar1))();
    if (cVar4 != '\0') {
      iVar5 = FUN_01d3a5a0();
      uVar13 = extraout_XMM0_Da_00;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar13 = extraout_XMM0_Da_01, iVar5 != 1))
      goto LAB_01bbd09e;
      FUN_01d3abf0();
      local_88 = FUN_01e466c0();
      local_120 = (**(code **)(*(int64_t *)pcVar1 + 0x930))();
      FUN_01e436c0();
      if ((extraout_XMM0_Db < local_88._4_4_) && (local_88._4_4_ < extraout_XMM0_Db + g_023908ec))
      {
        local_110 = '\0';
        local_108 = *arg1;
        local_100 = '\0';
        local_118 = pcVar1;
        uVar13 = FUN_0192ed00((uint32_t)local_88);
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        local_60 = CONCAT71(local_60._1_7_,(char)uVar13);
        if ((local_110 != '\0') && (local_118 != 0x0)) {
          FUN_00d50b20();
        }
        uVar8 = CONCAT71((uint7)(uint3)((uint)uVar13 >> 8),1);
        if ((char)local_60 != '\0') goto LAB_01bbd112;
      }
      uVar13 = FUN_01bbc610((uint32_t)local_88,local_120);
      pcVar2 = local_40;
      pVar10 = (void*)param_1;
      local_60 = *param_2;
      if (local_60 == local_40) {
        if (((char)param_2[1] == '\0') && (local_40 != 0x0)) {
          param_1 = (param_2 + 1);
          local_88 = param_1;
          if (local_38 == '\0') {
            uVar13 = FUN_00d50b00();
          }
          goto LAB_01bbd03d;
        }
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        local_88 = (param_2 + 1);
        cVar4 = (char)param_2[1];
        if (local_38 == '\0') {
          local_41 = cVar4;
          if (local_40 != 0x0) {
            uVar13 = FUN_00d50b00();
          }
          *param_2 = (int64_t)pcVar2;
          if ((local_41 != '\0') && (local_60 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          *param_2 = (int64_t)local_40;
          if ((cVar4 != '\0') && (local_60 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
LAB_01bbd03d:
        pVar10 = (void*)param_1;
        *local_88 = (code)0x1;
      }
      if (*param_2 == 0) goto LAB_01bbd09e;
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        local_128 = 0;
        local_130 = pcVar1;
        FUN_01bbc300((int)local_120,&local_130);
        pcVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0x0) {
            FUN_00d50b00();
            goto LAB_01bbd380;
          }
        }
        else if (local_40 != 0x0) {
LAB_01bbd380:
          local_88 = pcVar2;
          (**(code **)(&UNK_00001668 + *(int64_t *)pcVar1))();
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f8 = pcVar2;
          local_f0 = '\0';
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e7c0();
          local_70 = local_58;
          local_68 = 0;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_68 = '\x01';
          uVar13 = FUN_01367c80(uVar13,&local_70);
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
          local_e8 = *param_2;
          local_e0 = '\0';
          (**(code **)(*(int64_t *)pcVar1 + 0xab0))(uVar13,&local_e8);
          (**(code **)(*(int64_t *)local_40 + 0x620))();
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(int64_t *)pcVar1 + 0xe20))();
          local_40 = *param_2;
          local_38 = '\0';
          uVar7 = FUN_00d24090();
          uVar13 = extraout_XMM0_Da_04;
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((char)uVar7 == '\0') {
            local_d8 = *param_2;
            local_d0 = '\0';
            (**(code **)(*(int64_t *)pcVar1 + 0xda8))(uVar13,1);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
          uVar8 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
          FUN_00d50b20();
          goto LAB_01bbd112;
        }
        uVar8 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
        goto LAB_01bbd112;
      }
      (**(code **)(*(int64_t *)pcVar1 + 0xe20))();
      local_40 = *param_2;
      local_38 = '\0';
      cVar4 = FUN_00d24090();
      if ((local_38 != '\0') && (local_40 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        uVar8 = FUN_01d3b590();
        uVar13 = extraout_XMM0_Da_03;
        if ((uVar8 & 4) == 0) {
          uVar13 = (**(code **)(*(int64_t *)pcVar1 + 0xda0))();
        }
        local_c8 = *param_2;
        local_c0 = '\0';
        (**(code **)(*(int64_t *)pcVar1 + 0xda8))(uVar13,1);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar8 = FUN_01d3b590();
        if ((uVar8 & 4) != 0) {
          local_b8 = *param_2;
          local_b0 = '\0';
          (**(code **)(*(int64_t *)pcVar1 + 0xdb0))(extraout_XMM0_Da_02,1);
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*(int64_t *)pcVar1 + 0xeb0))();
      do {
        (**(code **)(*(int64_t *)pcVar1 + 0x658))();
        pcVar12 = local_40;
        pcVar2 = *arg1;
        if (pcVar2 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != 0x0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bbd30f;
            }
LAB_01bbd2cd:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
          }
          lVar3 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = (int64_t)local_40;
            if (((char)lVar3 != '\0') && (pcVar2 != 0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01bbd2cd;
          }
          if (local_40 != 0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)pcVar12;
          if (((char)lVar3 != '\0') && (pcVar2 != 0x0)) {
            FUN_00d50b20();
          }
LAB_01bbd30f:
          *(void*)(arg1 + 1) = 1;
          lVar3 = *arg1;
        }
        if (lVar3 == 0) {
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          break;
        }
        uVar6 = FUN_01d3a5a0();
        pcVar12 = (uint64_t)uVar6;
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          FUN_00d50b20();
        }
      } while (uVar6 != 6);
      uVar8 = CONCAT71((int7)((uint64_t)pcVar12 >> 8),1);
      (**(code **)(*(int64_t *)pcVar1 + 0xeb0))();
      goto LAB_01bbd10d;
    }
    uVar8 = 0;
  }
LAB_01bbd112:
  FUN_00d50b20();
LAB_01bbd11a:
  return uVar8 & 0xffffffff;
}

