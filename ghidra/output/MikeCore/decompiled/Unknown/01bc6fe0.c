// Function: FUN_01bc6fe0
// Address: 01bc6fe0
// Size: 3281 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01bc76fa) */
/* WARNING: Removing unreachable block (ram,0x01bc7703) */
/* WARNING: Removing unreachable block (ram,0x01bc75eb) */
/* WARNING: Removing unreachable block (ram,0x01bc75b1) */
/* WARNING: Removing unreachable block (ram,0x01bc75bd) */
/* WARNING: Removing unreachable block (ram,0x01bc7557) */
/* WARNING: Removing unreachable block (ram,0x01bc7560) */
/* WARNING: Removing unreachable block (ram,0x01bc7328) */
/* WARNING: Removing unreachable block (ram,0x01bc7696) */
/* WARNING: Removing unreachable block (ram,0x01bc76a6) */
/* WARNING: Removing unreachable block (ram,0x01bc764c) */
/* WARNING: Removing unreachable block (ram,0x01bc7655) */
/* WARNING: Removing unreachable block (ram,0x01bc71f8) */
/* WARNING: Removing unreachable block (ram,0x01bc7201) */
/* WARNING: Removing unreachable block (ram,0x01bc72b5) */
/* WARNING: Removing unreachable block (ram,0x01bc7471) */
/* WARNING: Removing unreachable block (ram,0x01bc747a) */
/* WARNING: Removing unreachable block (ram,0x01bc74cb) */
/* WARNING: Removing unreachable block (ram,0x01bc74d7) */
/* WARNING: Removing unreachable block (ram,0x01bc7505) */
/* WARNING: Removing unreachable block (ram,0x01bc7b68) */
/* WARNING: Removing unreachable block (ram,0x01bc7b78) */
/* WARNING: Removing unreachable block (ram,0x01bc7c9c) */
/* WARNING: Removing unreachable block (ram,0x01bc7ca8) */
/* WARNING: Removing unreachable block (ram,0x01bc7354) */
/* WARNING: Removing unreachable block (ram,0x01bc7361) */
/* WARNING: Removing unreachable block (ram,0x01bc7744) */
/* WARNING: Removing unreachable block (ram,0x01bc7754) */
/* WARNING: Removing unreachable block (ram,0x01bc70db) */
/* WARNING: Removing unreachable block (ram,0x01bc7100) */
/* WARNING: Removing unreachable block (ram,0x01bc70dd) */
/* WARNING: Removing unreachable block (ram,0x01bc7102) */

void FUN_01bc6fe0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  bool bVar7;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x398))();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) {
    bVar3 = true;
    lVar1 = unaff_RDI[0x2a];
  }
  else {
    local_50 = -1;
    bVar3 = true;
    while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
      pvVar5 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_68 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0126f420();
      if (cVar4 == '\0') {
        bVar3 = false;
      }
    }
    FUN_001159b0();
    FUN_00d50b20();
    lVar1 = unaff_RDI[0x2a];
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bc5de0();
  FUN_01bc0990();
  lVar2 = unaff_RDI[0x2a];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  cVar4 = FUN_00d23d70();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    if (bVar3) {
      if ((DAT_028b5ea8 == (undefined8 *)0x0) || (DAT_028b5eb1 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028b5ea8 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_02572358;
          (*DAT_02572370)();
          if (DAT_028b5ea8 == puVar6) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            bVar7 = DAT_028b5ea8 != (undefined8 *)0x0;
            DAT_028b5ea8 = puVar6;
            if (bVar7) {
              FUN_00d50b20();
            }
          }
          if (DAT_028b5eb0 == '\0') {
            DAT_028b5eb0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar3) {
            FUN_00d50b20();
          }
          puVar6 = DAT_028b5ea8;
          if (DAT_028b5ea8 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          lVar1 = DAT_027e56f8;
          if (DAT_027e56f8 != 0) {
            FUN_00d50b00();
          }
          FUN_01bca740();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          DAT_028b5eb1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b5eb1 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((DAT_028b5eb8 == (undefined8 *)0x0) || (DAT_028b5ec1 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028b5eb8 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_02572358;
          (*DAT_02572370)();
          if (DAT_028b5eb8 == puVar6) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            bVar7 = DAT_028b5eb8 != (undefined8 *)0x0;
            DAT_028b5eb8 = puVar6;
            if (bVar7) {
              FUN_00d50b20();
            }
          }
          if (DAT_028b5ec0 == '\0') {
            DAT_028b5ec0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar3) {
            FUN_00d50b20();
          }
          puVar6 = DAT_028b5eb8;
          if (DAT_028b5eb8 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          lVar1 = DAT_027e5700;
          if (DAT_027e5700 != 0) {
            FUN_00d50b00();
          }
          FUN_01bca740();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          DAT_028b5ec1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b5ec1 = '\x01';
          FUN_00e8cb70();
        }
      }
      puVar6 = DAT_028b5ea8;
      if (DAT_028b5ea8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_019169b0(param_1,param_2,0,0);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d48b40(DAT_02390124);
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_40 + 0x3a8))();
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01916470(param_1,param_2);
      FUN_01cfc6a0(DAT_02394288);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01916970(param_1,param_2);
    }
  }
  else if (bVar3) {
    if ((DAT_028b5e88 == (undefined8 *)0x0) || (DAT_028b5e91 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b5e88 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028b5e88 == puVar6) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
          bVar7 = DAT_028b5e88 != (undefined8 *)0x0;
          DAT_028b5e88 = puVar6;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b5e90 == '\0') {
          DAT_028b5e90 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        puVar6 = DAT_028b5e88;
        if (DAT_028b5e88 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        lVar1 = DAT_027e56e8;
        if (DAT_027e56e8 != 0) {
          FUN_00d50b00();
        }
        FUN_01bca740();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        DAT_028b5e91 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b5e91 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((DAT_028b5e98 == (undefined8 *)0x0) || (DAT_028b5ea1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b5e98 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028b5e98 == puVar6) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
          bVar7 = DAT_028b5e98 != (undefined8 *)0x0;
          DAT_028b5e98 = puVar6;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b5ea0 == '\0') {
          DAT_028b5ea0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        puVar6 = DAT_028b5e98;
        if (DAT_028b5e98 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        lVar1 = DAT_027e56f0;
        if (DAT_027e56f0 != 0) {
          FUN_00d50b00();
        }
        FUN_01bca740();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        DAT_028b5ea1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b5ea1 = '\x01';
        FUN_00e8cb70();
      }
    }
    puVar6 = DAT_028b5e88;
    if (DAT_028b5e88 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    FUN_019169b0(param_1,param_2,0,0);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_40 + 0x3a8))();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01916470(param_1,param_2);
    FUN_01cfc6a0(DAT_02391090);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01916970(param_1,param_2);
  }
  return;
}


