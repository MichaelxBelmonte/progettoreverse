// Function: FUN_00373de0
// Address: 00373de0
// Size: 3195 bytes
// Class: MDFileBrowserInsp


/* WARNING: Removing unreachable block (ram,0x00373f91) */
/* WARNING: Removing unreachable block (ram,0x00373f9d) */
/* WARNING: Removing unreachable block (ram,0x00374366) */
/* WARNING: Removing unreachable block (ram,0x00374372) */
/* WARNING: Removing unreachable block (ram,0x003740a3) */
/* WARNING: Removing unreachable block (ram,0x003740af) */

void FUN_00373de0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = (longlong *)(unaff_RDI + 0x28);
  if (*(longlong *)(unaff_RDI + 0x28) == 0) {
    if (*(longlong **)(unaff_RDI + 0x18) == (longlong *)0x0) {
LAB_00373e4b:
      plVar7 = (longlong *)0x0;
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x370))();
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_00373e4b;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    local_c0 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x18);
    local_d0 = plVar7;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_c8 = lVar2;
    cVar3 = FUN_00b80190();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_017a52b0();
      cVar3 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_01552cd0();
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') goto LAB_003745b0;
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_025f02c0;
        plVar7 = (longlong *)&DAT_025f0658;
        puVar4[2] = &DAT_025f0658;
        puVar4[3] = 0;
        *(undefined2 *)(puVar4 + 4) = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        uVar10 = (*DAT_025f02d8)();
        local_90 = 0;
        local_98 = *(longlong *)(unaff_RDI + 0x18);
        if (local_98 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_90 = '\x01';
        FUN_015ab850(uVar10,&local_98);
        plVar6 = *(longlong **)(unaff_RDI + 0x20);
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_00374178;
            }
            FUN_00d50b00();
            plVar7 = *(longlong **)(unaff_RDI + 0x20);
            *(longlong **)(unaff_RDI + 0x20) = local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_00374178:
            *(longlong **)(unaff_RDI + 0x20) = plVar8;
            plVar7 = plVar6;
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        param_1 = (pthread_key_t)plVar7;
        if (*(longlong *)(unaff_RDI + 0x20) != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          plVar6 = (longlong *)*plVar1;
          if (plVar6 != local_40) {
            plVar7 = plVar6;
            if (local_38 == '\0') {
              if (local_40 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar6 = local_40;
                plVar7 = (longlong *)*plVar1;
              }
            }
            else {
              local_38 = '\0';
              plVar6 = local_40;
            }
            *plVar1 = (longlong)plVar6;
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar6 = local_40;
            }
          }
          param_1 = (pthread_key_t)plVar7;
          if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_003745b0;
      }
      local_a0 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_a8 = lVar2;
      uVar10 = FUN_017a57b0();
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_017a7c70(uVar10,&local_50);
        plVar6 = *(longlong **)(unaff_RDI + 0x20);
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_00374058;
            }
            FUN_00d50b00();
            plVar6 = *(longlong **)(unaff_RDI + 0x20);
            *(longlong **)(unaff_RDI + 0x20) = local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_00374058:
            *(longlong **)(unaff_RDI + 0x20) = plVar8;
          }
          param_1 = (pthread_key_t)plVar6;
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(unaff_RDI + 0x20) != 0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        plVar6 = (longlong *)*plVar1;
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_0037443b;
            }
            FUN_00d50b00();
            plVar6 = (longlong *)*plVar1;
            *plVar1 = (longlong)local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_0037443b:
            *plVar1 = (longlong)plVar8;
          }
          param_1 = (pthread_key_t)plVar6;
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_b0 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar2;
      uVar10 = FUN_00b810f0();
      local_68 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_012ca6e0(uVar10,0);
        plVar7 = (longlong *)*plVar1;
        plVar6 = plVar7;
        if (plVar7 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
              goto LAB_00373f47;
            }
            FUN_00d50b00();
            plVar7 = (longlong *)*plVar1;
            *plVar1 = (longlong)local_40;
            plVar6 = local_40;
          }
          else {
            local_38 = '\0';
            plVar6 = local_40;
LAB_00373f47:
            *plVar1 = (longlong)plVar6;
          }
          param_1 = (pthread_key_t)plVar7;
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar6 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cbe00();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        FUN_012e6a70();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
LAB_003745b0:
    if (*plVar1 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_110 = (longlong *)0x0;
      local_108 = '\0';
      local_100 = (longlong *)0x0;
      local_f8 = '\0';
      pplVar9 = &local_100;
      local_88 = lVar2;
      FUN_012cc0c0(pplVar9,&local_110,1,0);
      param_1 = (pthread_key_t)pplVar9;
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        (**(code **)(*local_100 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
        (**(code **)(*local_110 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      plVar7 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7900();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00039550();
      (**(code **)(*plVar7 + 0x18))();
      lVar2 = *(longlong *)(unaff_RDI + 0x30);
      *(longlong **)(unaff_RDI + 0x30) = plVar7;
      if (lVar2 != 0) {
        FUN_00d50b20();
        plVar7 = *(longlong **)(unaff_RDI + 0x30);
      }
      local_70 = 0;
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar2;
      (**(code **)(*plVar7 + 0x3a0))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_e8 = '\0';
      local_f0 = (longlong *)0x0;
      FUN_00cb1fa0();
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
        FUN_00d50b20();
      }
    }
    if (local_d0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (*plVar1 == 0) goto LAB_00374990;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0x150);
  uVar10 = DAT_02390124;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x930))();
    uVar10 = FUN_00aea630();
  }
  FUN_012a4680(uVar10);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
LAB_00374990:
  FUN_00375250();
  return;
}


