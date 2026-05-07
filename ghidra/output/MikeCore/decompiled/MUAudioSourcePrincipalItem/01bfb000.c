// Function: FUN_01bfb000
// Address: 01bfb000
// Size: 1579 bytes
// Class: MUAudioSourcePrincipalItem


ulonglong FUN_01bfb000(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined4 local_9c;
  float local_98;
  float local_94;
  longlong *local_90;
  char local_88;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  plVar11 = local_70;
  cVar1 = (**(code **)(*unaff_RDI + 0x688))();
  if (cVar1 == '\0') {
    uVar10 = 0;
  }
  else {
    iVar2 = FUN_01caecd0();
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar2 == 0);
    if ((iVar2 == 0) && (param_2 != '\0')) {
      plVar7 = (longlong *)unaff_RDI[0x1e];
      (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x960))();
      local_88 = 0;
      if (local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      local_88 = '\x01';
      local_90 = local_70;
      local_94 = (float)(**(code **)(*plVar7 + 0x380))();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x960))();
      local_98 = (float)FUN_00d8d7b0();
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      plVar7 = (longlong *)&DAT_02572358;
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_01a13070();
      (**(code **)(*local_48 + 0xe20))();
      if (local_68[0] == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68[0] = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 != (longlong *)0x0) {
        local_68[0] = '\0';
        local_70 = (longlong *)0x0;
        local_60 = plVar11;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar2 = -local_58._4_4_;
            }
            else {
              iVar2 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar2);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar2 = 0;
            }
            local_58 = CONCAT44(iVar2,(int)local_58);
          }
          lVar4 = (longlong)(int)local_58;
          iVar2 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar2);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar2) break;
          lVar8 = local_60[2];
          local_70 = *(longlong **)(lVar8 + 8 + lVar4 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
          pVar6 = (pthread_key_t)lVar8;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar12 = FUN_0125e7c0();
          plVar11 = local_48;
          if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
             ((uVar12 = FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
            uVar12 = FUN_00d50b20();
          }
          local_b8 = '\0';
          local_c0 = local_70;
          FUN_019a54a0(uVar12,&local_c0);
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (longlong *)0x0) {
            local_40 = '\0';
            local_48 = plVar11;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            fVar14 = local_94;
            fVar15 = DAT_02390d34;
            if (local_94 < DAT_02390d34) goto LAB_01bfb38d;
          }
          else {
            fVar13 = (float)FUN_00d459e0();
            fVar14 = fVar13 + local_98;
            fVar15 = DAT_02390d34;
            if (fVar13 + local_98 < DAT_02390d34) {
LAB_01bfb38d:
              fVar15 = fVar14;
              if (fVar14 < 0.0) {
                fVar15 = 0.0;
              }
            }
          }
          local_9c = FUN_01bf6fe0(fVar15);
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc100(local_9c);
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        plVar7 = local_60;
      }
      if (*(int *)((longlong)puVar3 + 0xc) != 0) {
        FUN_01a13070();
        (**(code **)(*local_d8 + 0xe20))();
        FUN_00d23310();
        pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar7 >> 8),local_68[0]);
        pcVar9 = local_38;
        if (local_68[0] != '\0') {
          pcVar9 = local_68;
        }
        local_38[0] = local_68[0];
        *pcVar9 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        plVar11 = local_48;
        pvVar5 = _pthread_getspecific(pVar6);
        plVar7 = local_48;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar11 = plVar7, lVar4 != 0)) {
          plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        local_a8 = '\0';
        local_b0 = puVar3;
        FUN_013880c0();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar10 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
      FUN_00d50b20();
    }
  }
  return uVar10 & 0xffffffff;
}


