// Function: FUN_01a8a710
// Address: 01a8a710
// Size: 2175 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01a8a710(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  bool bVar10;
  undefined4 uVar11;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01a89190();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      local_58 = local_40;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a8a777;
    }
  }
  else {
    local_58 = local_40;
    if (local_40 != (longlong *)0x0) {
LAB_01a8a777:
      if (unaff_RDI[0x1d] == 0) {
LAB_01a8ade4:
        uVar8 = 0;
      }
      else {
        FUN_01caeb00();
        plVar7 = local_40;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (longlong *)0x0) goto LAB_01a8ade4;
        plVar7 = (longlong *)unaff_RDI[0x1d];
        FUN_01caeb00();
        uVar11 = (**(code **)(*local_68 + 0x970))();
        local_a0 = local_50;
        local_98 = 0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar11 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_98 = '\x01';
        pplVar9 = &local_40;
        (**(code **)(*plVar7 + 0x390))(uVar11,&local_a0);
        plVar7 = local_40;
        FUN_00053ac0();
        if (plVar7 == (longlong *)0x0) {
LAB_01a8a869:
          pplVar9 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') goto LAB_01a8a869;
        }
        local_70 = *pplVar9;
        if (*(char *)(pplVar9 + 1) == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar9 + 1) = 0;
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != (longlong *)0x0) && (param_2 != '\0')) {
          FUN_00e7bcc0();
          FUN_01a13070();
          if (local_40 == (longlong *)0x0) {
            bVar10 = false;
          }
          else {
            FUN_01a13070();
            pplVar9 = &local_50;
            (**(code **)(*local_68 + 0xd40))();
            plVar7 = local_50;
            FUN_00083c20();
            if (plVar7 == (longlong *)0x0) {
LAB_01a8a972:
              pplVar9 = (longlong **)&DAT_02802688;
            }
            else {
              (**(code **)(*plVar7 + 0x360))();
              cVar2 = FUN_00e85ea0();
              if (cVar2 == '\0') goto LAB_01a8a972;
            }
            bVar10 = *pplVar9 != (longlong *)0x0;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar10) {
            FUN_01a13070();
            (**(code **)(*local_50 + 0xd40))();
            plVar7 = local_40;
            FUN_00083c20();
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x360))();
              FUN_00e85ea0();
            }
            FUN_01a90540();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar11 = FUN_00d45bc0();
          FUN_01913540();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          pVar6 = 0;
          plVar5 = (longlong *)FUN_016cb9d0(uVar11,0);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01caeb00();
          plVar1 = local_40;
          plVar7 = (longlong *)unaff_RDI[0x1b];
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 == plVar7) {
            (**(code **)(*unaff_RDI + 0x630))();
            plVar7 = local_40;
            if ((DAT_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
              _DAT_026cd478 = FUN_00d4fe50();
              DAT_026cd460 = "GNList";
              _DAT_026cd468 = 0x20;
              pVar6 = 0x18210;
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
            pplVar9 = (longlong **)&DAT_02802688;
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x360))();
              cVar2 = FUN_00e85ea0();
              if (cVar2 != '\0') {
                FUN_0006e1c0();
                cVar2 = FUN_00e8da30();
                pplVar9 = &local_40;
                if (cVar2 == '\0') {
                  pplVar9 = (longlong **)&DAT_02802688;
                }
              }
            }
            local_88 = 0;
            plVar7 = *pplVar9;
            if (*(char *)(pplVar9 + 1) == '\0') {
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar9 + 1) = 0;
            }
            local_88 = '\x01';
            local_90 = plVar7;
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_68 = (longlong *)FUN_01507970();
            local_50 = plVar5;
            uVar11 = FUN_00e7b970();
            FUN_01acbed0(uVar11,0);
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01caeb00();
            plVar7 = local_40;
            plVar1 = (longlong *)unaff_RDI[0x1c];
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar7 == plVar1) {
              (**(code **)(*unaff_RDI + 0x630))();
              plVar7 = local_40;
              if ((DAT_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
                _DAT_026cd478 = FUN_00d4fe50();
                DAT_026cd460 = "GNList";
                _DAT_026cd468 = 0x20;
                pVar6 = 0x18210;
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
              pplVar9 = (longlong **)&DAT_02802688;
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x360))();
                cVar2 = FUN_00e85ea0();
                if (cVar2 != '\0') {
                  FUN_0006e1c0();
                  cVar2 = FUN_00e8da30();
                  pplVar9 = &local_40;
                  if (cVar2 == '\0') {
                    pplVar9 = (longlong **)&DAT_02802688;
                  }
                }
              }
              local_78 = 0;
              plVar7 = *pplVar9;
              if (*(char *)(pplVar9 + 1) == '\0') {
                if (plVar7 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar9 + 1) = 0;
              }
              local_78 = '\x01';
              local_80 = plVar7;
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_68 = (longlong *)FUN_01508610();
              local_50 = plVar5;
              uVar11 = FUN_00e7b970();
              FUN_01acce90(uVar11,0);
              if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          (**(code **)(*unaff_RDI + 0x678))();
        }
        if (local_70 == (longlong *)0x0) goto LAB_01a8ade4;
        uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01a8adef;
    }
  }
  uVar8 = 0;
LAB_01a8adef:
  return uVar8 & 0xffffffff;
}


