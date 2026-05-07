// Function: FUN_017d4800
// Address: 017d4800
// Size: 1876 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017d4d78) */
/* WARNING: Removing unreachable block (ram,0x017d4d84) */
/* WARNING: Removing unreachable block (ram,0x017d4c2d) */
/* WARNING: Removing unreachable block (ram,0x017d4c39) */
/* WARNING: Removing unreachable block (ram,0x017d4cf7) */
/* WARNING: Removing unreachable block (ram,0x017d4d03) */
/* WARNING: Removing unreachable block (ram,0x017d4e74) */
/* WARNING: Removing unreachable block (ram,0x017d4e80) */
/* WARNING: Removing unreachable block (ram,0x017d4f59) */
/* WARNING: Removing unreachable block (ram,0x017d4f66) */
/* WARNING: Removing unreachable block (ram,0x017d4f2d) */
/* WARNING: Removing unreachable block (ram,0x017d4f36) */

longlong * FUN_017d4800(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  longlong local_88;
  char local_80;
  longlong local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  
  lVar1 = DAT_027d3908;
  plVar5 = (longlong *)**(undefined8 **)(*param_2 + 0x10);
  if (DAT_027d3908 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar5 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027d3910;
  if (cVar3 == '\0') {
    plVar5 = (longlong *)**(undefined8 **)(*param_2 + 0x10);
    if (DAT_027d3910 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar5 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0277cf68;
    if (cVar3 != '\0') {
      plVar5 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 8);
      if (DAT_0277cf68 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar5 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027feca0;
      if (cVar3 == '\0') {
        plVar5 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 8);
        if (DAT_027feca0 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar5 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_88 = DAT_027d3928;
        if (cVar3 == '\0') goto LAB_017d4e40;
        if (DAT_027d3928 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        lVar1 = *(longlong *)(unaff_RSI + 0x100);
        if (lVar1 != 0) {
          local_80 = '\0';
          local_88 = 0;
          if (0 < *(int *)(lVar1 + 0xc)) {
            lVar6 = 0;
            do {
              local_88 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015076e0();
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0190f150();
              lVar2 = DAT_027d3920;
              if (DAT_027d3920 != 0) {
                FUN_00d50b00();
              }
              (**(code **)(*local_48 + 0x50))();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              lVar6 = lVar6 + 1;
            } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
          }
          FUN_017d9a00();
        }
        FUN_00d46530();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
            *unaff_RDI = local_88;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return unaff_RDI;
          }
          local_88 = 0;
        }
      }
      *unaff_RDI = local_88;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
    goto LAB_017d4e40;
  }
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_017d4380();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_017d4b20;
    }
  }
  else if (local_88 != 0) {
LAB_017d4b20:
    lVar6 = 0;
    while ((int)lVar6 < *(int *)(local_88 + 0xc)) {
      plVar5 = *(longlong **)(*(longlong *)(local_88 + 0x10) + lVar6 * 8);
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507640();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c5ee0();
      cVar3 = (**(code **)(*local_48 + 0x50))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      if (cVar3 != '\0') {
        if (*(int *)(*param_2 + 0xc) < 3) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RDI = (longlong)plVar5;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_017d9a00();
          FUN_00d50b20();
          if (lVar1 == 0) {
            return unaff_RDI;
          }
          FUN_00d50b20();
          return unaff_RDI;
        }
        FUN_0009d720();
        if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00d23690();
        pvVar4 = _pthread_getspecific(param_1);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0xa0))();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_017d9a00();
        FUN_00d50b20();
        if (lVar1 == 0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    FUN_017d9a00();
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_017d4e40:
  FUN_00d56410();
  return unaff_RDI;
}


